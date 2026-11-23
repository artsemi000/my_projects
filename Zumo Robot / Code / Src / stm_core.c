#include "stm_core.h"

//Inicializace (output)
bool STM_SetPinGPIO(GPIO_TypeDef *pgpio, uint32_t bitnum, eIoPortModes mode) {
	uint32_t enr_mask = 0; // hodnota do xxENR registru
	uint32_t rstr_mask = 0; // hodnota do xxRSTR registru

	switch ((uint32_t) pgpio) {
	case ((uint32_t) GPIOA):
		enr_mask = RCC_AHB1ENR_GPIOAEN;
		rstr_mask = RCC_AHB1RSTR_GPIOARST;
		break;
	case ((uint32_t) GPIOB):
		enr_mask = RCC_AHB1ENR_GPIOBEN;
		rstr_mask = RCC_AHB1RSTR_GPIOBRST;
		break;
	case ((uint32_t) GPIOC):
		enr_mask = RCC_AHB1ENR_GPIOCEN;
		rstr_mask = RCC_AHB1RSTR_GPIOCRST;
		break;
	default:
		return false;
	}

	if (!(RCC->AHB1ENR & enr_mask))    // need enable clock for GPIOB ?
	{
		RCC->AHB1ENR |= enr_mask;        // enable
		RCC->AHB1RSTR |= rstr_mask;     // reset pulse
		RCC->AHB1RSTR &= ~rstr_mask;    // and back to work
	}

	switch (mode) {

	case ioPortAlternatePP:
	case ioPortAlternateOC:
	pgpio->MODER |= 0x02 << (2 * bitnum); // set bits
	if (mode == ioPortAlternateOC)
	pgpio->OTYPER |= 0x01 << bitnum; // 1 = open-drain
	else
	pgpio->OTYPER &= ~(0x01 << bitnum); // 0 = push-pull
	pgpio->OSPEEDR |= 0x03 << (2 * bitnum); // high-speed = 11
	pgpio->PUPDR &= ~(0x03 << (2 * bitnum)); // 00 = no pull-up/pull-down
	// don't forget set AFR registers !!!
	break;

	case (ioPortOutputOC):
	case (ioPortOutputPP):

		pgpio->MODER |= 0x01 << (bitnum * 2);    // 01 = GPIO output
		pgpio->OSPEEDR |= 0x03 << (bitnum * 2);  // 11 = high-speed
		pgpio->PUPDR &= ~(0x03 << (bitnum * 2)); //No pulldown pullup
		if (mode == ioPortAlternateOC) {
			pgpio->OTYPER |= (1 << bitnum); // 01 = OpenColector
		} else {
			pgpio->OTYPER &= ~(1 << bitnum);         // 0 = PushPull
		}
		break;
	case (ioPortInputPU):
		pgpio->PUPDR &= ~(0x03 << (bitnum * 2)); //Clear
		pgpio->PUPDR |= (0x01 << (bitnum * 2)); //01 = pull-up
		break;
	case (ioPortInputPD):
		pgpio->PUPDR &= ~(0x03 << (bitnum * 2)); //Clear
		pgpio->PUPDR |= (0x02 << (bitnum * 2)); //10 = pull-down
		break;
	case (ioPortInputFloat):
		pgpio->PUPDR &= ~(0x03 << (bitnum * 2)); //Clear
		break;
	case (ioPortAnalog):
		pgpio->MODER |= (0x03 << (bitnum * 2)); //Analog mode = 11 (see reference manual)
		break;
	default:
		return false;
		break;

	}

	return true;

}
bool STM_SetAFGPIO(GPIO_TypeDef *pgpio, uint32_t bitnum, uint32_t afValue) {
	pgpio->AFR[(bitnum < 8) ? 0 : 1] &= ~(0x0f << (4 * (bitnum & 0x07))); // vynuluj AF bity
	pgpio->AFR[(bitnum < 8) ? 0 : 1] |= ((afValue & 0x0f)
			<< (4 * (bitnum & 0x07))); // nastav AF bity
	return true;
}

bool GPIORead(GPIO_TypeDef *pgpio, uint32_t bitnum, bool state) {
	return (bool) (pgpio->IDR & (1 << bitnum)) != 0;
}

//Write state
void GPIOWrite(GPIO_TypeDef *pgpio, uint32_t bitnum, bool state) {

	if (state) {
		pgpio->ODR |= (1 << bitnum);
	} else {
		pgpio->ODR &= ~(1 << bitnum);
	}
}

//Zmena stavu
void GPIOToggle(GPIO_TypeDef *pgpio, uint32_t bitnum) {
	pgpio->ODR ^= (1 << bitnum);
}

void Init8LED(void) {
	if (!(RCC->AHB1ENR & RCC_AHB1ENR_GPIOCEN))    // neniaktivniGPIOC ?
	{
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;        // povol hodiny
		RCC->AHB1RSTR |= RCC_AHB1RSTR_GPIOCRST;    // udelejRESET puls periferii
		RCC->AHB1RSTR &= ~RCC_AHB1RSTR_GPIOCRST;
	}
	GPIOC->MODER &= 0xffff0000; // nizsich 8 I/O nastaveno na 00 kazdy = defaultni stav
	GPIOC->MODER |= 0x00005555; // a pak jim nastav kazdemu01 = output, bitovezapis... 0101 0101 0101
	GPIOC->OTYPER &= 0xff00;    // kazdyvystup reprezentuje 1 bit, 0 = push-pull
	GPIOC->OSPEEDR |= 0x0000ffff;  // 2 bity na vystup, kombinace 11 = highspeed
	return;
}

void Write8LED(uint8_t val) {
	GPIOC->ODR = (GPIOC->ODR & 0xff00) | ((uint16_t) val); // zachovat hornich8b a prepsat spodnich8b hodnotou
	return;
}
void InitGPIO(void) {
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN | RCC_AHB1ENR_GPIOAEN;

    // PB1 - výstup push-pull (bzučák)
    GPIOB->MODER &= ~(3 << (1 * 2));
    GPIOB->MODER |= (1 << (1 * 2));

    // PB0 - výstup push-pull (LED)
    GPIOB->MODER &= ~(3 << (0 * 2));
    GPIOB->MODER |= (1 << (0 * 2));

    // PA0 - vstup s pull-up (tlačítko 1)
    GPIOA->MODER &= ~(3 << (0 * 2));
    GPIOA->PUPDR |= (1 << (0 * 2));  // Pull-up

    // PA1 - vstup s pull-up (tlačítko 2)
    GPIOA->MODER &= ~(3 << (1 * 2));
    GPIOA->PUPDR |= (1 << (1 * 2));  // Pull-up
}


