## Ohjelmointi opetuksessa

Materiaalia ohjelmoinnin opetukseen peruskouluissa ja lukioissa. Sisältö liittyy 5.10.2013 Jyväskylässä olleeseen luentoon ja työpajaan aiheesta **Innostava lähestymistapa ohjelmointiin**.

Käytettävien työkalujen keskeisenä osana on [Arduino](http://http://www.arduino.cc/), joka koostuu mikrokontrollerista ja ohjelmointiympäristöstä. Esimerkkien testaamisessa on ollut käytössä [Arduino Uno](http://arduino.cc/en/Main/ArduinoBoardUno)

Havainnollistamisessa on käytetty nallea, joka on hyvin perinteinen pehmolelu. Esimerkkejä voi toki hyödyntää muidenkin pehmolelujen kanssa. [Nallen rakennusohje].

### Arduino-ympäristön asennus

Opinsys:n palvelun piiriin kuuluvilla laitteilla ympäristö on valmiiksi asennettuna.

Yhteisön sivuilta löytyy asennusohjeet eri käyttöjärjestelmille
* [Windows](http://arduino.cc/en/Guide/Windows)
* [Mac OS X](http://arduino.cc/en/Guide/MacOSX)
* [Linux](http://www.arduino.cc/playground/Learning/Linux)

## Vilkutus

Nalle vilkuttaa tassulla keskeytyksettä. Tassulle vuorotellaan kahta asentoa, joiden välissää on kahden sekunnin viive.

![Kytkentäkaavio - Vilkutus](ohjeet/vilkutus_bb.jpg)

[Lähdekoodi](vilkutus/vilkutus.ino)

*Video*

## Tassujen heilutus

Nalle heiluttaa molempia tassuja siten, että tassut ovat vastakkaisissa asennoissa. Molemmilla tassuilla on vain kaksi asentoa, joita vuorotellaan kahden sekunnin välein.

![Kytkentäkaavio - Tassujen heilutus](ohjeet/tassujen_heilutus_bb.jpg)

[Lähdekoodi](tassujen_heilutus/tassujen_heilutus.ino)

## Tassujen heilutus tahdissa

Nalle heiluttaa molempia tassuja painonapin tahdissa. Molemmilla tassuilla on kaksi asentoa ja ne ovat aina vastakkaisissa asennoissa. Asentoa vaihdetaan aina kuin nappia painetaan.

![Kytkentäkaavio - Tassujen heilutus tahdissa](ohjeet/tassujen_heilutus_tahdissa_bb.jpg)

[Lähdekoodi](tassujen_heilutus_tahdissa/tassujen_heilutus_tahdissa.ino)

## Varoitus kaatumisesta

Nalle päästää hälytysäänen, jos se kaadetaan. Hälytysääni sammuu, kun nalle nostetaan takaisin istuma asentoon.

![Kytkentäkaavio - Varoitus kaatumisesta](ohjeet/varoitus_kaatumisesta_bb.jpg)

[Lähdekoodi](varoitus_kaatumisesta/varoitus_kaatumisesta.ino)
