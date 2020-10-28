#!/bin/bash
unameOut="$(uname -s)"
case "${unameOut}" in
    Linux*)     machine=Linux;;
    Darwin*)    machine=Mac;;
    CYGWIN*)    machine=Cygwin;;
    MINGW*)     machine=MinGw;;
    *)          machine="UNKNOWN:${unameOut}"
esac
if [ $machine != "Mac" -a $machine != "Linux" ]
then
    echo -e "$machine is not supported"
    exit 1
fi
install_dirname="install_aslCalc"
mkdir $install_dirname
cd $install_dirname
wget https://raw.githubusercontent.com/JackyKLai/asl_calculator/main/bin/asl_calculator.c
if [ $machine == "Mac" ]
then 
    clang -o asl_calculator asl_calculator.c
else
    gcc -o asl_calculator asl_calculator.c
fi
chmod a+x ./asl_calculator
sudo mv ./asl_calculator /usr/local/bin
rm ./asl_calculator.c
cd ..
rmdir $install_dirname
echo done