# Readme
## Author: Cristian C. Castillo & Baubak Saadat <br />
   CruzID: ccarri11<br />
   CruzID: saadat<br />
   🐶 Dog.cpp Assignment 0 <br />
   Professor Nawab  <br />
   UCSC CSE 130 🐌
--------
## Requirements 💻
The following installations are required to execute code:
- Ubuntu 18.04 environment

- Virtual Machine 

- Clang

## Assignment 0 Directory Contents 📂
- dog.cpp: is the main driver program

- dog_definition.cpp: Contains function definitions and operations

- dog_header.h: Contains declared void functions that work with dog_definitions to enable driver program

- DesignDocument.pdf: Contains Design plan, pseudo code (each part), Test Case, functions, assignment solution, assumption, goals, and data structures

- Makefile: Runs and compiles the necessary flags for the program and initiates a ready state for the program to be executed.

- README.me: What you are currently reading; Contains concise specs about program information and setup.

## Notes 📝
- This program was developed on a virtual machine environment with Ubuntu and replicates the linux cat command via system calls to the Kernel's Operating System.

- Folders are not accepted arguments, but the robustness tolerates such inputs and informs the user of bad arguments maintaining a safety of margin.

- Testing can be done by typing in terminal type: valgrind ./dog. See Design Documentation for infinite loops and more details. To continue test in valgrind press ctrl+d, should the test come to a pause.

- Terminal format input: ./dog argument1 argument2 argument3 

## Limitations/Issues ❗
- Dog.cpp runs properly only on Unix files and environment.

- Caveat! Only one dash argument is allowed for this program dog.cpp, additional dashes will be ignored.

- If the command ./dog has no file arguments it will prompt the user to enter data until ctrl+d is entered.

- If the user provides ./dog foo.txt foo2, the content within the those files will be printed in the order that the arguments were received.

- If the user provides ./dog fooDir, the terminal will notify the user of an invalid argument.

- If the user provides ./dog - with no arguments it will prompt the user to enter data until ctrl+d is entered.

- If the user provides ./dog - - or ./dog -- additional dashes will be ignored.

- If the user provides ./dog - foo.txt foo fooDIRECTORY -, dash will prompt the user for data, output the data via the terminal continuously, read the sequential file arguments (outputting the pertained content to those files), and notify that a directory is not allowed as an argument via the terminal's output. Lastly, ignoring the final dash.

## Instructions 🤖
- From desktop cd into asgn0 directory

- Once in asgn0 directory, type in make. The Makefile will run and compile the necessary flags for the program and initiate a ready state for the program to be executed.

- Optional: the user can create a directory or files with content to test program. Ensure the files contain content, also optional.

- in terminal input: ./dog (following optional arguments)

## Sources 📜
[<img align="left" alt="C++" width="80" height="80" src="https://cdn.freebiesupply.com/logos/large/2x/c-logo-png-transparent.png" />][cPlusPlus]

[<img align="left" alt="ShellWave" width="80" height="80" src="https://upload.wikimedia.org/wikipedia/commons/9/9f/Youtube%28amin%29.png" />][youtubeShell]

[<img align="left" alt="Geeks Picture" width="80" height="80" src="https://media-exp1.licdn.com/dms/image/C4E0BAQEF0x_q7m5JjQ/company-logo_200_200/0?e=2159024400&v=beta&t=tEbDQX9zSpsKFIZHJzuUCLCTEIXdSAbvaRirs5PKA1M" />][geeks]

[<img align="left" alt="Linux" width="80" height="80" src="https://image.flaticon.com/icons/png/512/518/518713.png" />][linux]
<br /><br /><br />

[cPlusPlus]: http://www.cplusplus.com/doc/tutorial/
[geeks]: https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/#:~:text=File%20descriptor%20is%20integer%20that,pointers%20to%20file%20table%20entries.&nbsp;
[youtubeShell]: https://www.youtube.com/watch?v=LERSkW_pLBs 
[linux]: https://man7.org/linux/man-pages/man2/syscalls.2.html





