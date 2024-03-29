<div align="center">
  
# Installation
  
</div>

## Installation of the development environment
  
 - Install Visual Studio Code.
 - In Visual Studio Code click on the "Extensions" icon in the left-hand menu (or press "Ctrl+Shift+X") and install the extension : "C/C++".
 - Next, you need to install a compiler. Go to the MYSYS2 download page: https://www.msys2.org/.
   and follow the differents steps.
 - To install the full compiler toolchain open the MYSY2 terminal and type : pacman -S --needed base-devel mingw-w64-x86_64-toolchain
 
 - Add the path to your Mingw-w64 bin folder to the Windows PATH environment variable by using the following steps:
     - In the Windows search bar, search Edit environment.
     - Choose the Path variable in your User variables and then select Edit.
     - Select New and add the Mingw-w64 destination folder path, and type the path : C:\msys64\mingw64\bin
     - Select OK to save the updated PATH. You will need to reopen any console windows for the new PATH location to be available.

## Opening and compilation of the project

- Then open the project in Visual Studio Code by opening the file "CPP_Connect4-main".
- In the Visual Studio Code terminal go in the current directory.
- Then compile the project by writing  :
```bash
g++ src/*.cpp -I headers -o main.exe ; ./main.exe
```
<div align="center"> 

# Presentation

## Enter your names and choose the size of the board
  
![1](https://github.com/YassineProDev/CPP_Connect4/assets/120946916/e6340a54-984f-4f5d-a33a-95931d887734)

## Each turn, choose the column where you want to drop your piece

![2](https://github.com/YassineProDev/CPP_Connect4/assets/120946916/b869ce7a-3e6b-4f39-9d38-284c1bed1e2a)

## At the end, the winner is displayed on the screen

![3](https://github.com/YassineProDev/CPP_Connect4/assets/120946916/addd693b-5286-4af2-9308-3c51ca1a3d85)

</div>
