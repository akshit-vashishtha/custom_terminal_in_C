# Custom Terminal in C
## Overview
This is a custom terminal program written in C that supports a variety of commands such as directory navigation, file manipulation, and content display. It simulates basic shell functionality with custom implementations of common terminal commands.

## Features
The terminal supports the following commands:

1) pwd: Prints the current working directory.
2) cd: Changes the current directory.
3) exit: Exits the terminal.
4) ls: Lists files and directories in the current directory separately.
5) newdir: Creates a new directory.
6) deldir: Deletes an existing directory.
7) newfile: Creates a new file.
8) delfile: Deletes a specified file.
9) display: Displays the content of a file.
10) copy: Copies contents of one file into another.
11) clearcontents: Clears the contents of a file.
12) print: Prints a custom message in terminal.
13) rename: Renames a file or directory.
14) move: Moves a file from one directory to another.

## How to start the terminal
Clone this repo in your local machine with command-> git clone https://github.com/akshit-vashishtha/custom_terminal_in_C.git
Inside custom_terminal_in_c do the below operations
### Compile the Program:
Use GCC to Compile the program
gcc -o my_shell main.c shell_interactive.c readLine.c splitLine.c executeArgs.c pwd.c cd.c ls.c newdir.c deldir.c newfile.c delfile.c display.c copy.c clearcontents.c clear.c print.c rname.c mv.c

An exe file name my_shell will be created
Execute that file using ./my_shell command and Custom terminal will be started

### Execute the command 
Excecute any of the supported command as you work normally in regualar shell
To know about commands and how to use them use getinfo command (yet to implement) which will provide basic syntax and information about a sepcific command

## Requirements
1) C Compiler: GCC or any C compiler.
2) Operating System: The terminal has been tested on Windows.

## Future enhancements
1) Support for additional commands.
2) Error handling improvements for more complex operations.
3) Support for more Operating Systems like linux


