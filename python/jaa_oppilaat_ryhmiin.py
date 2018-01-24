import random

print()
print("Uudet ryhmät!!!")
print()

# Avataan tiedosto ja tallennetaan viittaus
# oppilaat_tiedosto nimiseen muuttujaan
oppilaat_tiedosto = open("oppilaat.txt")

# Luodaan tyhjä taulukko, oppilaat
oppilaat = []

# Käydään oppilaat_tiedosto läpi rivi riviltä
for rivi in oppilaat_tiedosto:
	# Lisätään oppilaat-taulukoon tiedoston rivillä oleva oppilas
	oppilaat.append(rivi.strip())

random.shuffle(oppilaat)

ryhmien_maara = 3

ryhmat = []

for i in range(0, ryhmien_maara ):
	# Alustetaan ryhmien taulukot
	ryhmat.append([])

ryhma_index = 0
for oppilas in oppilaat:
	# Lisätään oppilas ryhmään
	ryhmat[ryhma_index].append(oppilas)

	# Kasvatetaan ryhma_index arvoa yhdellä.
    # Näin seuraava oppillas saadaan seuraavaan ryhmään
	ryhma_index += 1

	# Mikäli ryhmä_index vastaa ryhmien määrää,
    # palataan ensimmäisen ryhmän indexiin
	if ryhma_index == ryhmien_maara:
		ryhma_index = 0

# Ryhmien numerointi alkaa 1:stä.
ryhman_numero = 1
for ryhma in ryhmat:
	# Tulostetaan ryhmä nimi, jossa on mukana ryhmän numero
	print("Ryhmä: " + str(ryhman_numero))

	# Tulostetaan ryhmän oppilaat
	for oppilas in ryhma:
		print("\t" + oppilas)

	# Kasvatetaan ryhmän numeroa yhdellä
	ryhman_numero += 1
