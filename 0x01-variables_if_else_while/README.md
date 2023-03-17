# 0x01. C - Variables, if, else, while
## Resources

+ [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230317%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230317T072607Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=3664136a4446c47cbb198bba497e80ad2defa5e112b164a387e03b932aa5c813)(* You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: “comments”, “Data types | Integer types”, “Declaration”, “Characters”, “Arithmetic operators”, “Variables assignments”, “Comparisons”, “Logical operators”, “if, if…else”, “while loops”.*)</br>
+ [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)</br>
+ [Integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html)</br>
+ [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm)</br>
+ [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html)</br>
+ [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm)</br>
+ [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm)</br>
+ [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/)</br>
+ [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm)</br>
+ [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI)</br>

## Requirements
### General
+ Allowed editors: vi, vim, emacs</br>
+ All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</br>
+ All your files should end with a new line</br>
+ A README.md file, at the root of the folder of the project</br>
+ There should be no errors and no warnings during compilation</br>
+ You are not allowed to use system</br>
+ Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</br>

## Tasks
+ Tasks 1: [Positive anything is better than negative nothing](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c): This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.</br>

	+ You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
	+ The variable n will store a different value every time you will run this program
	+ You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
	+ The output of the program should be:
		- The number, followed by
			- if the number is greater than 0: is positive
			- if the number is 0: is zero
			- if the number is less than 0: is negative
		- followed by a new line
