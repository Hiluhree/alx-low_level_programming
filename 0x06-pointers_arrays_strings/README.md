# 0x06. C - More pointers, arrays and strings
<p>In this project, I learned about what and how to use pointers to pointers and multidimensional arrays in C as well as the most common C standard library functions to manipulate strings.</p>

### Learning Objectives
<p>At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg), without the help of Google:</p>

### General
+ What are pointers and how to use them
+ What are arrays and how to use them
+ What are the differences between pointers and arrays
+ How to use strings and how to manipulate them
+ Scope of variables
### Copyright - Plagiarism
+ You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
+ You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
+ You are not allowed to publish any content of this project.
+ Any form of plagiarism is strictly forbidden and will result in removal from the program.
### Requirements
#### General
+ Allowed editors: vi, vim, emacs
+ All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
+ All your files should end with a new line
+ A README.md file, at the root of the folder of the project is mandatory
+ Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
+ You are not allowed to use global variables
+ No more than 5 functions per file
+ You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
+ You are allowed to use putchar
+ You don’t have to push putchar.c, we will use our file. If you do it won’t be taken into account
+ In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
+ The prototypes of all your functions and the prototype of the function putchar should be included in your header file called main.h
+ Don’t forget to push your header file


## Task
+ Task 0: [strcat](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x06-pointers_arrays_strings/0-strcat.c): A function that concatenates two strings.

	+ Prototype: char strcat(char *dest, char *src);
	+ This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
	+ Returns a pointer to the resulting string dest
		- FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.
+ Task 1: [strncat](): A function that concatenates two strings.

	+ Prototype: char *_strncat(char *dest, char *src, int n);
	+ The _strncat function is similar to the _strcat function, except that
		- it will use at most n bytes from src; and
		- src does not need to be null-terminated if it contains n or more bytes
	+ Return a pointer to the resulting string dest
		- FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.
