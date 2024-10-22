So far as I understand, C++ needs a text editor and a compiler and we will use GCC as a compiler and VS code as editor (or just IDE)

Well turns out my first problem is with my include : #include <iostream>
with error : "#include errors detected. Please update your includePath. Squiggles are disabled for this translation unit"

In order to fix this, I will follow a tutorial to install everything correctly

I fell like Code Blocks would not have this kind of issue out of the box but let's finish the configuration.

I will follow this video : https://www.youtube.com/watch?v=DMWD7wfhgNY&ab_channel=KennyYipCoding

Okay After following this video and this tutorial page : https://www.naukri.com/code360/library/how-to-compile-and-run-the-cpp-program
I still have some issue with running and debuging my code. But it works by doing the following
Compiler : g++ nomDuFichier.cpp -o nomDuFichier
-> Ce qui produit un fichier nomDuFichier.exe
Lancer : ./nomDuFichier

Et voilà le tour est joué!
