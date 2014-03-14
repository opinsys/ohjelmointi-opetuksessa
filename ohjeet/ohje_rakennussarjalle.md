<font color='red'>Tämä dokumenttin on keskeneräinen</font>

## Opinsys-nalle rakennusohje

Lisätietoja rakennussarjasta ja sen hankkimisesta: [http://www.opinsys.fi/nalle](http://www.opinsys.fi/nalle)

[Rakennussarjan pakkausseloste](ohjeet/pakkausseloste)

### Työkalut

Tarvitset sivuleikkurit. Kärkipihdeistä on apua johdotuksessa, mutta ne eivät ole välttämättömät.

### Valmistelevat toimenpiteet

Arduino kiinnitetään vanerilevyyn kolmen ruuvin avulla.

[Arduinon kiinnitys](kuvat/arvuinon_kiinnitys_ruuveilla.jpg)

Koekytkentälevy kiinnitetään vanerin toiseenpäähän tarran avulla.

[Koekytkentälevyn kiinnitys](kuvat/koekytkentalevyn_kiinnitys.jpg)

### Kytkentöjen tekeminen

Aluksi Arduinosta kytketään 5v jännite ja maa (GND) koekyntkentälevyyn. Lisäksi koekytkentälevyn pystysuuntaiset plus ja miinus linjat yhdistetään komponettien kytkennän helpottamiseksi. Koekytkentälevyn keskelle jää kaksi linjastoa, joissa kytkentäkohdat ovat yhdistettynä päinvastaisessa suunnassa kuin laidoilla olevat plus - miinus linjat. Esimerkiksi ensimmäisellä rivillä a-e muodostavat yhtenäisen linjan samoin kuin f-j (katso koekytkentälevyllä olevat merkinnät).

![Kytkentä](kuvat/kytkenta_plus_miinus.jpg)

#### Servot

![Servo](kuvat/servo.jpg)

Servot tarvitsevat 5v jännitteen, maan ja lisäksi ohjauksen. Servojen liittimet eivät käy suoraan koekytkentälevyyn, joten kytkentää varten pitää asentaa piikkirimat (f-1,2,3 ja f-4,5,6). Plus ja miinus saadaan kätevästi oikeasta laidasta lyhyillä hyppylangoilla (j-2, j-3, j-5, j-6). Lopuksi porteista 2 (i-4) ja 4 (h-1) asennetaan johto servojen ohjausjohdon kohdalle. Servojen liittimet voidaan kytkeä molemmin päin, joten huomio tämä tehdessäsi lopullista asennusta.

![Kytkentä, servot](kuvat/kytkenta_servot.jpg)

*Kytkennän testaus*

Kytke Arduino USB-kaapelilla tietokoneeseen ja lataa siihen ohjelma [Tassujen heilutus](tassujen_heilutus/tassujen_heilutus.ino). Kun molemmat servot on kytketty oikein, niiden pitäisi pyörittää moottoria vuorotellen.


### Asentokytkin

![Asentokytkin](kuvat/asentokytkin.jpg)

Taivuta asentosensorin jalat kuvan mukaisesti, jolloin koekytkentälevylle (h-14, i-13) asentaminen onnistuu helposti. Toiselle jaloista kytketään 5v jännite (j-14). Maa kytketään toiseen jalkaan (j-13) vastuksen avulla. Asentokytkimen tila luetaan portista 8, joten tämä kytketään samaaan jalkaan kuin vastus (g-13).

![Kytkentä, asentokytkin](kuvat/kytkenta_asentokytkin.jpg)

*Kytkennän testaus*

Testaus kannattaa suorittaa kaiuttimen asennuksen jälkeen.

### Kaiutin

![Kaiutin](kuvat/kaiutin.jpg)

Kaiutin tarvitsee ohjauksen (g-22) portista 12 sekä maan (j-26).

![Kytkentä, kaiutin](kuvat/kytkenta_kaiutin.jpg)

*Kytkennän testaus*

Testataan asentokytkimen ja kaiuttimen toiminta yhtäaikaa. Lataa Arduinoon ohjelma [varoitus kaatumisesta](varoitus_kaatumisesta/varoitus_kaatumisesta.ino). Kun kytkentä on normaalisti pöydällä, pitäisi kuulua sireeniä muistuttava ääni. Kun nostat kytkentäkokonaisuuden ylös ja käännät sen siten, että asentokytkin on pystysuunnassa, niin sireenin ääni lakkaa.

![Asentokytkimen ja kaiuttimen testaus](kuvat/asentokytkin_kaiutin_testaus.jpg)

### Valovastus

FIXME: tarvitaan suoraan koekytkentälevylle tehty kytkentä, sekä lopullinen kytkentä

Valovastuksen jalkoihin kytketään jännite vastuksen avulla. Valovastuksen arvo luetaan A0 portin kautta ja näin ollen se kytketään vastuksen puoleiseen jalkaan.

*Kytkennän testaus*

Lataa Arduinoon ohjelma [ohikulkijalle vilkutus](ohikulkijalle_vilkutus/ohikulkijalle_vilkutus.ino). Ensimmäisen viidensekunnin aikana ohjelma kalibroi valovastuksen valitsevaan valon määrään. Kun tämän jälkeen peität valovastuksen siten, että siihen pääsee vähemmän valova, toisen servon moottorin pitäisi likkua. Kun lopetata valovastuksen peittämisen, moottorin pitäisi sammua.

### Komponenttien asennus nallen sisään

FIXME: poista nallesta nippuside valmiiksi

Nalle selässä on tarrakiinnitys, jonka avaamalla päästään nallen sisälle.

[Nallen avaus](kuvat/nalle_auki.jpg)

Ensimmäiseksi nallen sisälle täytyy tehdä tilaa komponenteille, jote täytettä otetaan reisulusti pois.

[Nallen tyhjennys](kuvat/nallen_tyhjennys.jpg)

#### Valovastus

Ensimmäisenä komponenttina kannattaa asentaa valovastus, koska myöhemmässä vaiheessa sen asentaminen on hankalaa. Hyvä paikka valovastukselle on nallen maha siten, että valovastuksen jalkojen väliin jää ompelesauma, jolloin jalat eivät joudu helposti kosketuksiin nallen sisällä.

[Valovastuksen asennus](kuvat/valovastuksen_asennus.jpg)

Valovastusten kytkemiseen rakennussarjassa on kaksi  n. 25cm mittaista naaras-uros kytkentäjohtoa. Valovastuksen jalat ovat liian ohuet kytkettäväksi suoraan ko. johtoon, joten jalkoja on taivutettava esim. kärkipihdeillä. Tämän jälkeen kytkentäjohtojen naaraspuoli voidaan kytkeä valovastuksen jalkoihin.

[Valovastuksen kytkentä](kuvat/valovastuksen_kytkenta.jpg)

#### Servot

# FIXME: vaihda servoihin oikea lapa valmiiksi

Servojen lapoja on jatkettava, jotta niitä voidaan käyttää tassujen heiluttamiseen. Tähän käytetään rautalangan pätkiä (n. 15cm), jotka tulevat rakennussarjan mukana.

Taita aluksi rautalangan päätä, jotta tukeva kiinnitys on helpompi tehdä

[Rautalanka](kuvat/taivutettu_rautalanka.jpg)

Ujuta rautalangan taivutettu pää servon lavan reiästä.

[Rautalanka](kuvat/taivutettu_rautalanka_servo.jpg)

Tämän jälkeen kiinnitä sidoslangan avulla rautalanka tiukasti lapaan kiinni

[Rautalanka](kuvat/rautalangan_sitominen.jpg)

Lopuksi löysytä lavan ruuvia ja poista turhat välykset, jolloin rautalanka pysyy napakasti lavassa kiinni.

[Rautalanka](kuvat/rautalanka_lavan_valysten_poisto.jpg)

Servot asennetaan nallen sisään vanerilevyn avulla. Asenna nippusiteet valmiiksi vanerilevyn reikiin. Tämän jälkeen laita levy nallen sisään selässä olevan reiän kautta. Nippusiteiden kohdalle tulee servot, joten niiden pitää olla tassujen ylälaidan kohdalla.

[Vanerilevy](kuvat/vanerilevyn_asennus_nalleen.jpg)

Servot asennetaan nalleen sisään siten, että rautalangat ujutettan suoraan tassuihin. Asennus viimeistellään kiristämälle servon ympärille vanerilevyssä olevat nippusiteet. Muista tässä vaiheessa tarkistaa, että servojen liikerata vastaa tassujen liikerataa.

[Servojen asennus](kuvat/servojen_asennus_nalleen.jpg)

#### Arduino

USB-kaapeliin kannattaa tehdä nippusiteen avulla pieni lenkki, jolloin Arduinon asentaminen nallen sisään onnistuu helpommin ja USB-liittimeen ei kohdistu niin paljon rasitusta.

[USB-johto](kuvat/lenkki_usb_johtoon.jpg)

Kytkentäkokonaisuus (Arduino, koekytkentälevy, usb-kaapeli) kannattaa asentaa nalleen siten, että koekytkentälevy jää lähimmäksi selässä olevaa aukkoa. Näin johtojen kytkeminen onnistuu helpommin.

[Arduinon asennus nallen sisään](kuvat/arduinon_asennus_nallen_sisaan.jpg)

Lopuksi kiinnitetään vapaana olevat johdot kytkentään ja suljetaan nalle.

[Johtimien kiinnitys](kuvat/johtimien_kiinnitys.jpg)

Nalle on valmis!

Hauskoja hetkiä ohjelmoinnin parissa!
