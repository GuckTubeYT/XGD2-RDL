# XGD2-RDL
Modify XGD2 (XBOX 360) ISO to can play using DVD-R DL, and i recommended to burn xbox 360 games iso to DVD-R DL, using ImgBurn

# Requirement
- ImgBurn (Or you can use other burn application, but i recommended ImgBurn)
- DVD-R DL
- XGD2 ISO
- XBOX 360 With flashed DVD Drive

# How to use
1. Build the source or you can download if you are lazy to build the source: https://github.com/GuckTubeYT/XGD2-RDL/releases/download/1.0/XGD2-RDL.exe
2. Put the executable near XGD2 ISO
3. Open the app and then it will display "Please enter name ISO you want to patch it", and then put name of XGD2 ISO. Example: halo3.iso
4. And then, it will display "Please enter name for save modify ISO", and then enter name for save modify ISO. Example: halo3rdl.iso
5. Wait until done, after done modify, open ImgBurn and press "Write image file to disc"
6. And then select the modified ISO
7. After select the modified ISO, Change write speed to 4x (Maybe you can use other write speed, but, i recommended 4x write speed)
8. Wait until burning done, and then you can play the games

# Build
To open the project, use Codeblocks (with MINGW), Link: http://sourceforge.net/projects/codeblocks/files/Binaries/20.03/Windows/codeblocks-20.03mingw-setup.exe

or, if you want build using g++, do `g++ main.cpp -o XGD2-RDL`
