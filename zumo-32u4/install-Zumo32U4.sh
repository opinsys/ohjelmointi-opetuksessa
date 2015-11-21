#!/bin/sh

cd /tmp

wget https://github.com/pololu/a-star/archive/master.zip
unzip master.zip
rm master.zip

mkdir -p ~/arduino/hardware
cp -r a-star-master/add-on/pololu/ ~/arduino/hardware

wget https://github.com/pololu/zumo-32u4-arduino-library/archive/master.zip
unzip master.zip
rm master.zip

mkdir -p ~/arduino/libraries
mv zumo-32u4-arduino-library-master Zumo32U4
mv Zumo32U4/ ~/arduino/libraries/

wget https://github.com/opinsys/ohjelmointi-opetuksessa/archive/master.zip
unzip master.zip
rm master.zip
mkdir -p ~/arduino/libraries/Zumo32U4_opinsys/examples
cp -r ohjelmointi-opetuksessa-master/zumo-32u4/* ~/arduino/libraries/Zumo32U4_opinsys/examples
