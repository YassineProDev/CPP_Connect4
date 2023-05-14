<div align="center">
  
# Installation
  
</div>
  
 - Install Visual Studio Code 
 - In Visual Studio Code click on the "Extensions" icon in the left-hand menu (or press "Ctrl+Shift+X") and install the extension : "C/C++"
 - Next, you need to install a compiler. Go to the Oracle JDK download page: https://www.msys2.org/ 
   and follow the differents steps 
 - To install the full compiler toolchain open the MYSY2 terminal and type : pacman -S --needed base-devel mingw-w64-x86_64-toolchain
 
 - Add the path to your Mingw-w64 bin folder to the Windows PATH environment variable by using the following steps:
     - In the Windows search bar, search Edit environment
     - Choose the Path variable in your User variables and then select Edit
     - Select New and add the Mingw-w64 destination folder path, and type the path : C:\msys64\mingw64\bin 
     - Select OK to save the updated PATH. You will need to reopen any console windows for the new PATH location to be available

- Then open the project
- In the Visual Studio Code terminal go in the current directory
<div align="center">
  
![1](https://github.com/YassineProDev/CPP_Connect4/assets/120946916/e9f3aad3-5025-43fc-a472-6d987a0b47bb)
  
</div>

- Then compile the project by writing  : g++ src/*.cpp -I headers -o main ; ./main.exe 

<div align="center">
  
![2](https://github.com/YassineProDev/CPP_Connect4/assets/120946916/99d79694-d856-4b45-b692-540bb9324e41)


# Presentation


## Enter your names and choose the size of the board
  
![1](https://user-images.githubusercontent.com/120946916/234127981-d11ceed4-ff64-4b57-a73b-62f31858c20c.png)

## Each turn, choose the column where you want to drop your piece

![2](https://user-images.githubusercontent.com/120946916/234127989-585e598a-b3a2-422b-b189-86d0bd7d4b8b.png)

## At the end, the winner is displayed on the screen

![3](https://user-images.githubusercontent.com/120946916/234128001-77671b94-05f5-4a1b-87ce-5d19c9a6e148.png)

</div>
