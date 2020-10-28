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
In "Intensified Continuity Visual Style in Contemporary American Film," David Bordwell protests the existence of post-classical films. He claims the contemporary American film style does not depart from classicality but rather intensifies it. One of the stylistic devices being intesified, according to Bordwell, takes the form of the increase in editing pace (decrease in average shot length).

With Adobe Premiere Pro's new Scene Edit Detection feature, we can generate a .edl file for a film. Loading the Edit Decision Lists files for *Ocean's Eleven* (1960) and its 2011 remake into ASL Calculator yields an interesting result: the original has an ASL of 13.24 and the remake has an ASL of 6.09.

We can then ask questions like "does this trend of decreasing ASL affect films made by the same director?". Take a director like Scorsese, who got his start in the Hollywood Renaissance period and still has an ongoing career, we can examine the ASL of his, for the sake of consistency, mob flicks. *Mean Streets* (1973) has an ASL of 7.78, and the ASL for *GoodFellas* (1990) and *The Irishman* (2019) are, respectively, 6.77 and 4.86.

ASL can provide an insight into many topics in film studies. For even more questions that can be answered with ASL calculator, we can think along the lines of genre differences (how big of a gap is there between the ASL of *Once Upon a Time in Hollywood* (2019) and *The Hateful Eight* (2015)?), auteurist differences within the same genre (how similar are *Mean Streets* and *The Godfather* (1972) in terms of editing pace?), etc.
