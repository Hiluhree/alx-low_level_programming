# 0x02. C - Functions, nested loops

## Resources

+ [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
+ [C - Functions](http://www.tutorialspoint.com/cprogramming/c_functions.htm)
+ [Learning to Program in C](https://www.youtube.com/watch?v=qMlnFwYdqIw)(Part 06) (*stop at 14:00*)(
+ [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
+ [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm) (*stop before the “Once-Only Headers” paragraph*)

## Tasks

+ Task 0: [putchar](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/0-putchar.c): A program that prints putchar, followed by a new line.</br>

	+ The program should return 0
+ Task 1: [I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/1-alphabet.c): A function that prints the alphabet, in lowercase, followed by a new line.</br>

	+ Prototype: void print_alphabet(void);
	+ You can only use putchar twice in your code
+ Task 2: [10 x alphabet](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/2-print_alphabet_x10.c): A function that prints 10 times the alphabet, in lowercase, followed by a new line.</br>

	+ Prototype: void print_alphabet_x10(void);
	+ You can only use putchar twice in your code
+ Task 3: [islower](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/3-islower.c): A Write a function that checks for lowercase character.</br>

	+ Prototype: int islower(int c);
	+ Returns 1 if c is lowercase
	+ Returns 0 otherwise
		- FYI: The standard library provides a similar function: islower. Run man islower to learn more.
+ Task 4: [isalpha](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/4-isalpha.c): A function that checks for alphabetic character.</br>
	+ Prototype: int isalpha(int c);
	+ Returns 1 if c is a letter, lowercase or uppercase
	+ Returns 0 otherwise
+ Task 5: [Sign](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/5-sign.c): A unction that prints the sign of a number.</br>

	+ Prototype: int print_sign(int n);
	+ Returns 1 and prints + if n is greater than zero
	+ Returns 0 and prints 0 if n is zero
	+ Returns -1 and prints - if n is less than zero
+ Task 6: [There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you](): A Write a function that computes the absolute value of an integer.</br>

	+ Prototype: int abs(int);
		- FYI: The standard library provides a similar function: abs. Run man abs to learn more.
+ Task 7: [There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/7-print_last_digit.c): A function that prints the last digit of a number.</br>

	+ Prototype: int print_last_digit(int);
	+ Returns the value of the last digit
+ Task 8: [I'm federal agent Jack Bauer, and today is the longest day of my life](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/8-24_hours.c): A function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.</br>

	+ Prototype: void jack_bauer(void);
	+ You can listen to this soundtrack while coding :)
+ Task 9: [Learn your times table](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/9-times_table.c): A function that prints the 9 times table, starting with 0.</br>

	+ Prototype: void times_table(void);
	+ Format: see example
+ Task 10: [a + b](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/10-add.c): A function that adds two integers and returns the result.</br>

	+ Prototype: int add(int, int);
+ Task 11: [98 Battery Street, the OG](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/11-print_to_98.c): A function that prints all natural numbers from n to 98, followed by a new line.</br>

	+ Prototype: void print_to_98(int n);
	+ Numbers must be separated by a comma, followed by a space
	+ Numbers should be printed in order
	+ The first printed number should be the number passed to your function
	+ The last printed number should be 98
	+ You are allowed to use the standard library
+ Task 12: [The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/100-times_table.c): A Write a function that prints the n times table, starting with 0.</br>

	+ Prototype: void print_times_table(int n);
	+ If n is greater than 15 or less than 0 the function should not print anything
+ Task 13: [Nature made the natural numbers; All else is the work of women](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/101-natural.c): If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.</br>

	+ You are allowed to use the standard library
+ Task 14: [In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/102-fibonacci.c): A program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.</br>

	+ The numbers must be separated by comma, followed by a space , 
	+ You are allowed to use the standard library
+ Task 15: [Even Liber Abbaci](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/103-fibonacci.c): Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.</br>

	+ You are allowed to use the standard library
+ Task 16: [In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x02-functions_nested_loops/104-fibonacci.c): A program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.</br>

	+ The numbers should be separated by comma, followed by a space ,
	+ You are allowed to use the standard library
	+ You are not allowed to use any other library (You can’t use GMP etc…)
	+ You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
	+ You are not allowed to hard code any Fibonacci number (except for 1 and 2)
