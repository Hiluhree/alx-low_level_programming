# 0x04. C - More functions, more nested loops

## Resources
+ [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
+ [C - Functions](http://www.tutorialspoint.com/cprogramming/c_functions.htm)
+ [Learning to Program in C](https://www.youtube.com/watch?v=qMlnFwYdqIw) (Part 06) (stop at 14:00)
+ [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
+ [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm) (*stop before the “Once-Only Headers” paragraph*)

### Tasks
+ Task 1: [isupper](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/0-isupper.c): A function that checks for uppercase character.</br>

	+ Prototype: int isupper(int c);
	+ Returns 1 if c is uppercase
	+ Returns 0 otherwise
		- FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.
+ Task 1: [isdigit](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/1-isdigit.c): A function that checks for a digit (0 through 9).</br>

	+ Prototype: int isdigit(int c);
	+ Returns 1 if c is a digit
	+ Returns 0 otherwise
		- FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.
+ Task 2: [Collaboration is multiplication](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/2-mul.c): A function that multiplies two integers.</br>

	+ Prototype: int mul(int a, int b);
+ Task 3: [The numbers speak for themselves](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/3-print_numbers.c): A function that prints the numbers, from 0 to 9, followed by a new line.

	+ Prototype: void print_numbers(void);
	+ You can only use putchar twice in your code
+ Task 4: [I believe in numbers and signs](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/4-print_most_numbers.c): A function that prints the numbers, from 0 to 9, followed by a new line.</br>

	+ Prototype: void print_most_numbers(void);
	+ Do not print 2 and 4
	+ You can only use putchar twice in your code
+ Task 5: [Numbers constitute the only universal language](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/5-more_numbers.c): A function that prints 10 times the numbers, from 0 to 14, followed by a new line.

	+ Prototype: void more_numbers(void);
	+ You can only use putchar three times in your code
+ Task 6: [The shortest distance between two points is a straight line](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/6-print_line.c): A function that draws a straight line in the terminal.

	+ Prototype: void print_line(int n);
	+ You can only use putchar function to print
	+ Where n is the number of times the character _ should be printed
	+ The line should end with a \n
	+ If n is 0 or less, the function should only print \n
+ Task 7: [I feel like I am diagonally parked in a parallel universe mandatory](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/7-print_diagonal.c): A function that draws a diagonal line on the terminal.

	+ Prototype: void print_diagonal(int n);
	+ You can only use putchar function to print
	+ Where n is the number of times the character \ should be printed
	+ The diagonal should end with a \n
	+ If n is 0 or less, the function should only print a \n
+ Task 8: [You are so much sunshine in every square inch](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x04-more_functions_nested_loops/8-print_square.c): A function that prints a square, followed by a new line.

	+ Prototype: void print_square(int size);
	+ You can only use putchar function to print
	+ Where size is the size of the square
	+ If size is 0 or less, the function should print only a new line
	+ Use the character # to print the square
+ Task 9: [Fizz-Buzz](): The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.</br>
A program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.

	+ Each number or word should be separated by a space
	+ You are allowed to use the standard library
+ Task 10: [Triangles](): A function that prints a triangle, followed by a new line.

	+ Prototype: void print_triangle(int size);
	+ You can only use putchar function to print
	+ Where size is the size of the triangle
	+ If size is 0 or less, the function should print only a new line
	+ Use the character # to print the triangle
