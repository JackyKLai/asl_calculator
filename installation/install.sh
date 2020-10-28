#!/bin/bash
unameOut="$(uname -s)"
install_dirname="install_aslCalc"
mkdir $install_dirname
cd $install_dirname
wget https://raw.githubusercontent.com/JackyKLai/asl_calculator/main/bin/asl_calculator.c
gcc -o asl_calculator asl_calculator.c
chmod a+x ./asl_calculator
sudo mv ./asl_calculator /usr/local/bin
rm ./asl_calculator.c
cd ..
rmdir $install_dirname
echo done