#!/bin/bash
unameOut="$(uname -s)"
install_dirname="install_aslCalc"
mkdir $install_dirname
cd $install_dirname
wget https://raw.githubusercontent.com/JackyKLai/asl_calculator/main/bin/asl_calculator
chmod a+x ./asl_calculator
sudo mv ./asl_calculator /usr/local/bin
cd ..
rmdir $install_dirname
echo done