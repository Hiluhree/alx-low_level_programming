# 0x00. C - Hello, World </br>

## Resources</br>
+ [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230316%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230316T064759Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=947aab0c0c77b7c54a2017c3b52b9933b12f0f0767766f8d062e1ce45f27f7ad)(*you do not have to learn everything in there yet, but make sure you read it entirely first*)
+ [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
+ [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
+ [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
+ [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
+ [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
+ [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
+ [Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)
+ [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21)(*Look at only after you finish consuming the other resources*)
+ [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus) (*Look at only after you finish consuming the other resources*)

## More Info
### Betty linter
To run the Betty linter just with command betty <filename>:

+ Go to the [Betty](https://github.com/holbertonschool/Betty) repository
+ Clone the [repo](https://github.com/holbertonschool/Betty) to your local machine
+ cd into the Betty directory
+ Install the linter with sudo ./install.sh
+ emacs or vi a new file called betty, and copy the script below:</br>
	#!/bin/bash
</br>	#Simply a wrapper script to keep you from having to use betty-style
</br>	#and betty-doc separately on every item.
</br>	#Originally by Tim Britton (@wintermanc3r), multiargument added by
</br>	#Larry Madeo (@hillmonkey)

</br>	BIN_PATH="/usr/local/bin"
</br>	BETTY_STYLE="betty-style"
</br>	BETTY_DOC="betty-doc"

</br>	if [ "$#" = "0" ]; then
</br>    	echo "No arguments passed."
</br>  		exit 1
</br>	fi

</br>	for argument in "$@" ; do
</br>   	echo -e "\n========== $argument =========="
</br>   	${BIN_PATH}/${BETTY_STYLE} "$argument"
</br>   	${BIN_PATH}/${BETTY_DOC} "$argument"
</br>	done
+ Once saved, exit file and change permissions to apply to all users with chmod a+x betty
+ Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
  - You can now type betty <filename> to run the Betty linter!

## Tasks
+ Task 0: [Preprocessor](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x00-hello_world/0-preprocessor): A script that runs a C file through the preprocessor and save the result into another file.</br>

	+ The C file name will be saved in the variable $CFILE
	+ The output should be saved in the file c
+ Task 1: [Compiler](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x00-hello_world/1-compiler): A script that compiles a C file but does not link.</br>

	+ The C file name will be saved in the variable $CFILE
	+ The output file should be named the same as the C file, but with the extension .o instead of .c.
		- Example: if the C file is main.c, the output file should be main.o
+ Task 2: [Assembler](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x00-hello_world/2-assembler): A script that generates the assembly code of a C code and save it in an output file.</br>

	+ The C file name will be saved in the variable $CFILE
	+ The output file should be named the same as the C file, but with the extension .s instead of .c.
		- Example: if the C file is main.c, the output file should be main.s
+ Task 3: [Name](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x00-hello_world/3-name): A script that compiles a C file and creates an executable named cisfun.</br>

	+ The C file name will be saved in the variable $CFILE
+ Task 4: [Hello, puts](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x00-hello_world/4-puts.c): A C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.</br>

	+ Use the function puts
	+ You are not allowed to use printf
	+ Your program should end with the value 0
+ Task 5: [Hello, printf](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x00-hello_world/5-printf.c): A C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.</br>

	+ Use the function printf
	+ You are not allowed to use the function puts
	+ Your program should return 0
	+ Your program should compile without warning when using the -Wall gcc option
+ Task 6: [Size is not grandeur, and territory does not make a nation](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x00-hello_world/6-size.c): A C program that prints the size of various types on the computer it is compiled and run on.</br>

	+ You should produce the exact same output as in the example
	+ Warnings are allowed
	+ Your program should return 0
	+ You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
+ Task 7: [Intel](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x00-hello_world/100-intel): A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.</br>

	+ The C file name will be saved in the variable $CFILE.
	+ The output file should be named the same as the C file, but with the extension .s instead of .c.
		- Example: if the C file is main.c, the output file should be main.s
+ Task 8: [UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x00-hello_world/101-quote.c): A C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.</br>

	+ You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
	+ Your program should return 1
	+ Your program should compile without any warnings when using the -Wall gcc option
