Tady najdete popis každeho dokumentu, aby to bylo pochopitelné.
## 1. `Zarici_hvezda_BOM.txt`  
- **Název:** *Bill of Materials (BOM)*  
- **Obsah:** Seznam všech elektronických součástek potřebných pro sestavení desky plošného spoje (PCB).  
- **Detaily:**  
  - Názvy součástek (např. R1, C1, LED1).  
  - Hodnoty (např. 22kΩ rezistor, 1µF kondenzátor).  
  - Počet kusů na desce.  
  - Odkazy na konkrétní součástky (např. katalogové číslo).  

## 2. `Zarici_hvezda_BOT.pdf`  
- **Název:** *Bottom Layer (BOT)*  
- **Obsah:** Výkres spodní strany desky (měděné stopy a součástky, pokud jsou osazeny i zespodu).  
- **Použití:** Pro výrobu PCB – určuje, kde se na spodní straně nacházejí vodivé cesty.  

## 3. `Zarici_hvezda_MIL.pdf` 
- **Název:** *Mill Layer (MIL)*  
- **Obsah:** Výkres pro frézování obrysu desky nebo vyřezávání otvorů.  
- **Použití:** Určuje tvar a rozměry desky (např. zaoblené rohy, výřezy).  

## 4. `Zarici_hvezda_OZAZ_BOT.pdf` & `Zarici_hvezda_OZAZ_TOP.pdf` 
- **Název:** *OZAZ = Označení (Silk Screen) – BOT/TOP*  
- **Obsah:**  
  - **TOP:** Potisk (text, čísla součástek) na vrchní straně desky.  
  - **BOT:** Potisk na spodní straně desky (pokud existuje).  
- **Použití:** Pro kontrolu při osazování součástek (např. kde je R1 nebo C1).  

## 5. `Zarici_hvezda_PLB.pdf`  
- **Název:** *Pájecí maska – Bottom Layer (PLB)*  
- **Obsah:** Výkres spodní nepájivé masky (zelený nebo jiný povrch, který chrání měď před zkraty).  
- **Použití:** Určuje, kde *není* maska, aby se mohly připájet součástky.  

## 6. `Zarici_hvezda_PLT.pdf`  
- **Název:** *Pájecí maska – Top Layer (PLT)*  
- **Obsah:** Výkres vrchní nepájivé masky (analogicky k PLB, ale pro vrchní stranu).  

## 7. `Zarici_hvezda_PnP_back.txt`
- **Název:** *Pick and Place (PnP) – Back Side*  
- **Obsah:** Seznam součástek a jejich přesných souřadnic na desce pro automatické osazování strojem.  
- **Detaily:**  
  - Pozice (X, Y).  
  - Rotace součástek.  
  - Typ součástky (např. "R0805" pro rezistor).  

## 8. `Zarici_hvezda_SMB.pdf`
- **Název:** *Solder Mask – Bottom (SMB)*  
- **Obsah:** Alternativní označení pro spodní pájecí masku (podobné jako PLB, ale může obsahovat další technické detaily).  

## Proč je to důležité?  
Tyto soubory jsou **nezbytné pro výrobu a osazení desky**. Bez nich by výrobce nevěděl:  
- Jak má deska vypadat (**MIL, BOT, PLB**).  
- Kde umístit součástky (**PnP, BOM**).  
- Jak označit součástky pro montáž (**OZAZ**).  

