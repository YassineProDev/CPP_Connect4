<div align="center">
  
# Installation
  
</div>
  
 - Install Visual Studio Code 
 - In Visual Studio Code click on the "Extensions" icon in the left-hand menu (or press "Ctrl+Shift+X") and install the extension : "C/C++"
 - Next, you need to install a compiler. Go to the Oracle JDK download page: https://www.msys2.org/ and follow the differents steps 
 - To install the full compiler toolchain open the cmd and type : pacman -S --needed base-devel mingw-w64-x86_64-toolchain
 - Add the path to your Mingw-w64 bin folder to the Windows PATH environment variable by using the following steps:
     - In the Windows search bar, type 'settings' to open your Windows Settings.
     - Search for Edit environment variables for your account.
     - Choose the Path variable in your User variables and then select Edit.
     - Select New and add the Mingw-w64 destination folder path, with \mingw64\bin appended, to the system path. The exact path depends on which version of Mingw-         w64 you have installed and where you installed it. If you used the settings above to install Mingw-w64, then add this to the path: C:\msys64\mingw64\bin.
     - Select OK to save the updated PATH. You will need to reopen any console windows for the new PATH location to be available

<div align="center">


<div align="center">

## Connect 4


## Enter your names and choose the size of the board
  
![1](https://user-images.githubusercontent.com/120946916/234127981-d11ceed4-ff64-4b57-a73b-62f31858c20c.png)

## Each turn, choose the column where you want to drop your piece

![2](https://user-images.githubusercontent.com/120946916/234127989-585e598a-b3a2-422b-b189-86d0bd7d4b8b.png)

## At the end, the winner is displayed on the screen

![3](https://user-images.githubusercontent.com/120946916/234128001-77671b94-05f5-4a1b-87ce-5d19c9a6e148.png)

</div>
