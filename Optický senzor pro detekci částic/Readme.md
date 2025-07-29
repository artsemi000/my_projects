Spolu s kolegy na univerzitě jsme navrhli malý a cenově dostupný senzor, který dokáže měřit množství prachových částic ve vzduchu (PM1.0, PM2.5, PM10). Využívá laserové světlo a princip rozptylu – dva lasery osvítí proudící vzduch a fotodiody měří, jak moc se světlo rozptýlí na částicích. Z toho pak určíme jejich množství i velikost.

Zařízení je řízeno pomocí Arduino Nano, které zajišťuje sběr a zpracování dat. Pro přesnější výstup používáme jednoduchý algoritmus (Random Forest), který pomáhá vyhodnotit koncentrace.

Senzor jsme navrhli tak, aby byl kompaktní, levný a vhodný pro domácí nebo průmyslové použití. 

V rámci této práce jsme se nepouze zabývali návrhem samotného optického senzoru, ale také jsme aktivně pracovali na jeho výrobě a praktické realizaci. Součástí projektu bylo i programování Arduino, které řídí celý proces měření a zpracování dat ze senzorů.

Důležitou částí naší práce byla také tvorba 3D tištěného rámu, který slouží jako pevná a přesná konstrukce pro upevnění všech součástek senzoru. Tento rám jsme navrhli tak, aby dokonale držel všechny komponenty na správném místě a umožňoval snadnou manipulaci i montáž.

Další nezbytnou součástí bylo pečlivé plánování, kdy jsme museli vyřešit, které díly a materiály budeme pro výrobu potřebovat, jak je objednat a jak efektivně nakoupit vše potřebné. Tento proces nás naučil nejen plánování a organizaci, ale také efektivní týmovou spolupráci.

Celý projekt tak nebyl jen o technickém návrhu, ale i o reálném praktickém zvládnutí výroby, programování a koordinace týmu, což výrazně přispělo k našemu profesnímu růstu a pochopení komplexního procesu vývoje takového zařízení.

## ✅ Co jsme zjistili:
Zelený laser vykazoval vyšší citlivost než červený.

Při vyšších koncentracích prachu byly výsledky stabilnější.

Měření je potřeba provádět ve stínu, aby na senzory nepůsobilo vnější světlo.

##  Možnosti vylepšení:
Přidání WiFi nebo Bluetooth pro bezdrátový přenos dat.

Napájení z baterie pro plně autonomní provoz bez kabelu.

Kalibrace na další typy částic (např. pyl, kouř).

## 📄
V přiloženém souboru najdete celý protokol, který podrobně popisuje konstrukci, princip fungování, použité komponenty, schéma zapojení, výsledky měření i návrhy na další rozšíření. 
[Protokol](./Protokol)
