# PROJECT-ON-READING-FILES
Introduction-
File handling is one of the essential features in the C programming language. It allows users to store data permanently in files instead of relying only on temporary memory (RAM). This program demonstrates basic file operations such as writing, reading, and appending data to a text file using standard C library functions. By selecting an option from the menu, the user can interact with a file named file.txt, making this program a practical example of file manipulation in C.

Analysis-
The program presents a menu with three choices:
1. Write to File
The user enters text.


The program opens file.txt with "w" mode.


This overwrites any previous content in the file.


The text is written using fprintf().


2. Read from File
The program opens file.txt in "r" mode.


Reads and displays the file content.


Uses fscanf(fp, "%[^\n]") to read an entire line.


3. Append to File
Opens the file in "a" mode.


Adds new text to the existing content without deleting it.


Uses fprintf(fp, " %s") to append after a space.


Potential Issues
No error handling for failure to open the file (fopen() could return NULL).


fscanf() reads only the first line; multiple lines would not be fully read.


text buffer has a limit of 100 characters; long input may overflow.


Despite these limitations, the program is functional and demonstrates basic file operations clearly.
