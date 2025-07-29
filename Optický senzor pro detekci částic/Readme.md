Spolu s kolegy na univerzitě jsme navrhli malý a cenově dostupný senzor, který dokáže měřit množství prachových částic ve vzduchu (PM1.0, PM2.5, PM10). Využívá laserové světlo a princip rozptylu – dva lasery osvítí proudící vzduch a fotodiody měří, jak moc se světlo rozptýlí na částicích. Z toho pak určíme jejich množství i velikost.

Zařízení je řízeno pomocí Arduino Nano, které zajišťuje sběr a zpracování dat. Pro přesnější výstup používáme jednoduchý algoritmus (Random Forest), který pomáhá vyhodnotit koncentrace.

Senzor jsme navrhli tak, aby byl kompaktní, levný a vhodný pro domácí nebo průmyslové použití.

# Co jsme zjistili:
Zelený laser vykazoval vyšší citlivost než červený.

Při vyšších koncentracích prachu byly výsledky stabilnější.

Měření je potřeba provádět ve stínu, aby na senzory nepůsobilo vnější světlo.

# Možnosti vylepšení:
Přidání WiFi nebo Bluetooth pro bezdrátový přenos dat.

Napájení z baterie pro plně autonomní provoz bez kabelu.

Kalibrace na další typy částic (např. pyl, kouř).

## Protokol

📄 V přiloženém souboru najdete celý protokol, který podrobně popisuje konstrukci, princip fungování, použité komponenty, schéma zapojení, výsledky měření i návrhy na další rozšíření. 
[Protokol](/.Protokol)
