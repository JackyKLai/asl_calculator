# ASL Calculator
A simple c program that calculates the ASL (average shot length) given a .edl (Edit Decision Lists) file.

# Installation
**Compilation is a part of the installation process. Make sure to have gcc (or clang on Mac) installed beforehand.**

Install:

    wget https://raw.githubusercontent.com/JackyKLai/asl_calculator/main/installation/install.sh
    chmod a+x install.sh
    ./install.sh
    rm ./install.sh
    
Uninstall:

    wget https://raw.githubusercontent.com/JackyKLai/asl_calculator/main/installation/uninstall.sh
    chmod a+x uninstall.sh
    ./uninstall.sh
    rm ./uninstall.sh
    
# Usage
    
    asl_calculator edl_file_path frame_rate

![Usage_example](https://github.com/JackyKLai/asl_calculator/raw/main/usage.JPG)

# Some Interesting Findings With ASL Calculator
In "Intensified Continuity Visual Style in Contemporary American Film," David Bordwell protests the existence of post-classical films. He claims the contemporary American film style does not depart from classicality but rather intensifies it. One of the stylistic devices being intesified, according to Bordwell, takes the form of the increase in editing pace.

With Adobe Premiere Pro's new Scene Edit Detection feature, we can generate a .edl file for a film. Loading the Edit Decision Lists files for *Ocean's Eleven* (1960) and its 2011 remake into ASL Calculator yields an interesting result: the original has an ASL of 13.24 and the remake has an ASL of 6.09.
