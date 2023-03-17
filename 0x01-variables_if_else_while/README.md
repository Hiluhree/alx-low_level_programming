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
+ Task 0: [Positive anything is better than negative nothing](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c): This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.</br>

	+ You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
	+ The variable n will store a different value every time you will run this program
	+ You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
	+ The output of the program should be:
		- The number, followed by
			- if the number is greater than 0: is positive
			- if the number is 0: is zero
			- if the number is less than 0: is negative
		- followed by a new line
+ Task 1: [The last digit](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x01-variables_if_else_while/1-last_digit.c): This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.</br>

	+ You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c)
	+ The variable n will store a different value every time you run this program
	+ You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
	+ The output of the program should be:
		- The string Last digit of, followed by
		- n, followed by
		- the string is, followed by
			- if the last digit of n is greater than 5: the string and is greater than 5
			- if the last digit of n is 0: the string and is 0
			- if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
		- followed by a new line
+ Task 2: [I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x01-variables_if_else_while/2-print_alphabet.c): A program that prints the alphabet in lowercase, followed by a new line.

	+ You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	+ All your code should be in the main function
	+ You can only use putchar twice in your code
+ Task 3: [alphABET](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x01-variables_if_else_while/3-print_alphabets.c): A program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

	+ You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	+ All your code should be in the main function
	+ You can only use putchar three times in your code
+ Task 4: [When I was having that alphabet soup, I never thought that it would pay off](): A program that prints the alphabet in lowercase, followed by a new line.

	+ Print all the letters except q and e
	+ You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	+ All your code should be in the main function
	+ You can only use putchar twice in your code
+ Task 5: [Numbers](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x01-variables_if_else_while/5-print_numbers.c): A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

	+ All your code should be in the main function
+ Task 6: [Numberz](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x01-variables_if_else_while/6-print_numberz.c): A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

	+ You are not allowed to use any variable of type char
	+ You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	+ You can only use putchar twice in your code
	+ All your code should be in the main function
+ Task 7: [Smile in the mirror](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x01-variables_if_else_while/7-print_tebahpla.c): A Write a program that prints the lowercase alphabet in reverse, followed by a new line.

	+ You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	+ All your code should be in the main function
	+ You can only use putchar twice in your code
+ Task 8: [Hexadecimal](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x01-variables_if_else_while/8-print_base16.c): A Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

	+ You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	+ All your code should be in the main function
	+ You can only use putchar three times in your code
+ Task 9: [Patience, persistence and perspiration make an unbeatable combination for success](): A program that prints all possible combinations of single-digit numbers.

	+ Numbers must be separated by ,, followed by a space
	+ Numbers should be printed in ascending order
	+ You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
	+ All your code should be in the main function
	+ You can only use putchar four times maximum in your code
	+ You are not allowed to use any variable of type char
