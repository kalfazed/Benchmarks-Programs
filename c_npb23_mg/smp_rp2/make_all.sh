#!/bin/sh

#make clean

rm *.log

pes="1pe 32pe 64pe 128pe"
for pe in $pes
do
    cd $pe
    make clean
    make &
    lastid=$!
#    make ccout
    cd ..
done

wait $lastid
