#Text Editor in C
This is a simple text editor programmed in the C language. The text editor provides three main operations: reading a file, writing to a file, and counting the number of words in a file. It utilizes the ncurses library for creating a text-based user interface.

#Features
Read a file.
Write to a file.
Count the number of words in a file.
Text navigation using keys like right arrow, left arrow, backspace, and enter.
#Files
The project is structured into several files:
createfunctions.c: Contains functions to create and manage the text editor's functionality.
printcommands.c: Provides functions for displaying commands and messages to the user.
readfile.c: Handles reading operations from a file.
countwords.c: Contains functions to count the number of words in a file.
appendfile.c: Handles appending text to an existing file.
lib.a: An archive library file containing the compiled functions from the above files.
main.c: The main program file, which is linked with lib.a and the ncurses library.
Dependencies
The project relies on the ncurses library for creating the user interface. Ensure you have the ncurses library installed on your system to compile and run this program.
