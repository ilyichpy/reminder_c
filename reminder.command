#!/bin/bash
pwd
a=$(pwd)
b=$(find $a -name "reminder_c")
cd $b
cd src
make all
./reminder.out