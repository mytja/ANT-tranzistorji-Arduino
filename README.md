# ANT tranzistorji – Arduino

Vsa Arduino koda za delavnico za ANT 2024. Repozitorij se mora obdržati strogo tajno do konca tekmovanja.

Za zdaj se tukaj zbirajo SAMO predlogi za naloge. To NISO dokončne in izbrane naloge. Čim več nalog, tem bolje bo, ker bova tako imela večjo svobodo pri izbiri ustreznih nalog.

## Pomen datotek v posamezni nalogi

- `ANT-tranzistorji-base.ino` – koda, ki se bo naložila na mikrokontroler ekipe. Ta koda vsebuje tudi rešitev naloge, zato jo je potrebno spremeniti za vsako nalogo posebej.
- `README.md` – splošen opis naloge
- `transistor-base.cpp` – C++ datoteka z definicijami logičnih vrat
- `transistor-base.hpp` - C++ header datoteka z definicijami logičnih vrat za uporabo v `.ino` datoteki

## Kako dodati novo nalogo?

Prekopirajo naj mapo `ANT-tranzistorji-base` v mapo v stilu `naloga_xx`, kjer je `xx` zaporedna številka naloge.

Odprejo naj datoteko `ANT-tranzistorji-base.ino` v novoustvarjeni mapi v urejevalniku besedila (tudi Visual Studio Code je v redu). Če Oni odprejo v Arduino IDE-ju, bo ta verjetno jokal in stokal, ker se ime mape ne ujema z imenom datoteke. To bo eventuelno urejeno.

Najdi vrstico, ki se začne z `bool logic = `. Sem dodaj svoje zaporedje vrat po zgledu ostalih nalog. Na voljo so sledeča vrata:

- `NOT` (edini, ki sprejme samo en signal)
- `AND`
- `NAND`
- `OR`
- `NOR`
- `XOR`
- `XNOR`

Na voljo je kar 8 vhodov, in sicer:

- `A`
- `B`
- `C`
- `D`
- `E`
- `F`
- `G`
- `H`

Čeprav je na voljo 8 vhodov, je še vedno priporočljivo, da se drživa omejitve največ 4 vhodov. Seveda, če bo kdaj več kot 4 vhodi, ni problema, ne bi pa rad čisto vedno.

Če bo kakšna naloga podvojena, ni problema. Jo bom izločil ob ročnem pregledu po dodanih nalogah.

Po dodani nalogi v `.ino` datoteki naj odprejo tudi `README.md` datoteko v isti prej-ustvarjeni mapi. Naj se naslov spremeni iz `## Naloga xx` v npr. `## Naloga 16`, kjer je `xx` zaporedna številka naloge. Poleg tega se doda še rešitev, ki je lahko 100% copy-pastana iz `.ino` datoteke, razen tega, da so vhodi napisani z malo namesto z veliko.

## Opredeljevanje na nalogah

Priporočljivo – ne pa nujno – je opredeljevanje, tj. kako težka se Jim zdi naloga. To velja seveda zgolj za osebno subjektivno mnenje o SiOL-u, zato ni kakorkoli obvezujoče. Mnenja se seveda ne skladajo nujno, s tem pa ni nič narobe.

Za opredeljevanje se zgolj doda nova vrstica v delu `Opredelitev težavnosti naloge` v `README.md` datoteki za vsako nalogo. Vrstica se doda po zgledu.
