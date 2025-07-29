V tomto oddílu můžete vidět video s výsledky mého projektu. Robot dokáže spolehlivě sledovat černou čáru díky infračerveným senzorům, které jsem integroval a nakonfiguroval. Při pohybu plynule zatáčí, udržuje stabilní rychlost a dokáže se vyhýbat překážkám. Veškeré pohyby jsou řízeny vlastním algoritmem, který jsem navrhl pro zpracování dat ze senzorů a dynamické řízení motorů.

# Jak senzory fungují?
Použil jsem řadu infračervených (IR) senzorů, které detekují odraz světla od podkladu. Světlý povrch světlo odráží, zatímco černá čára světlo pohlcuje — díky tomu může mikrokontrolér jednoduše rozlišit, kde se čára nachází, a podle toho upravit směr pohybu. Výstupy ze senzorů jsou neustále vyhodnocovány a podle nich se automaticky regulují otáčky jednotlivých kol.

# Proč právě černá čára?
Černá barva pohlcuje většinu světla, což poskytuje jasný kontrast vůči okolnímu povrchu. To umožňuje velmi přesnou detekci i při vyšších rychlostech. Díky tomu je čára jednoznačně rozpoznatelná i bez složitého zpracování obrazu.

# Možné vylepšení
Projekt má stále prostor pro rozvoj. Do budoucna bych rád přidal:

Bluetooth ovládání pro možnost manuálního řízení nebo nastavení parametrů robota přímo z mobilní aplikace.

Automatickou kalibraci senzorů pro různé typy povrchů a světelných podmínek, aby robot fungoval spolehlivě i mimo testovací prostředí.

# Příklad využití v praxi
Tento typ robota by mohl najít uplatnění například v logistických centrech nebo skladech, kde by automaticky převážel zboží po předem vyznačených trasách. Díky své schopnosti sledovat čáru, vyhýbat se překážkám a pracovat autonomně by mohl výrazně zvýšit efektivitu práce.

# Video


https://github.com/user-attachments/assets/3d734bd0-4033-43b4-8e58-e23ada83a7e4



https://github.com/user-attachments/assets/e42ae48e-35be-4841-bbe5-0cb834590ab0

