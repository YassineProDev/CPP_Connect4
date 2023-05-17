<div align="center">
  
# Installation
  
</div>

## Installation of the development environment
  
 - Install Visual Studio Code.
 - In Visual Studio Code click on the "Extensions" icon in the left-hand menu (or press "Ctrl+Shift+X") and install the extension : "C/C++".
 - Next, you need to install a compiler. Go to the Oracle JDK download page: https://www.msys2.org/.
   and follow the differents steps.
 - To install the full compiler toolchain open the MYSY2 terminal and type : pacman -S --needed base-devel mingw-w64-x86_64-toolchain
 
 - Add the path to your Mingw-w64 bin folder to the Windows PATH environment variable by using the following steps:
     - In the Windows search bar, search Edit environment.
     - Choose the Path variable in your User variables and then select Edit.
     - Select New and add the Mingw-w64 destination folder path, and type the path : C:\msys64\mingw64\bin
     - Select OK to save the updated PATH. You will need to reopen any console windows for the new PATH location to be available.

## Opening and compilation of the project

- Then open the project in Visual Studio Code by opening the file "CPP_PlayerHuntedByWildAnimals-main".
- In the Visual Studio Code terminal go in the current directory.
- Then compile the project by writing  :
```bash
g++ src/*.cpp -I headers -o main.exe ; ./main.exe
```
<div align="center"> 

# Presentation

## Enter your names and choose the size of the board
  
![1](https://github.com/YassineProDev/CPP_Connect4/assets/120946916/f9fe6c20-d2fb-4e54-a7fc-ca0075899a86)

## Each turn, choose the column where you want to drop your piece

![2](https://github.com/YassineProDev/CPP_Connect4/assets/120946916/ff89f939-42d3-40b6-abcb-e4cc57e15153)

## At the end, the winner is displayed on the screen

![3](https://github.com/YassineProDev/CPP_Connect4/assets/120946916/61c8f56c-bbba-45d8-ae0e-1b5e52d82d30)


</div>
