# Beauty is variable, ugliness is constant
## Resources
+ [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)
+ [Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
+ [Const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8)

### Tasks
+ Task 0: [Beauty is variable, ugliness is constant](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x10-variadic_functions/0-sum_them_all.c): A function that returns the sum of all its parameters.

	+ Prototype: int sum_them_all(const unsigned int n, ...);
	+ If n == 0, return 0
+ Task 1: [To be is to be the value of a variable](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x10-variadic_functions/1-print_numbers.c): Afunction that prints numbers, followed by a new line.

	+ Prototype: void print_numbers(const char separator, const unsigned int n, ...);
	+ where separator is the string to be printed between numbers
	+ and n is the number of integers passed to the function
	+ You are allowed to use printf
	+ If separator is NULL, don’t print it
	+ Print a new line at the end of your function
+ Task 2: [One woman's constant is another woman's variable](): A function that prints strings, followed by a new line.

	+ Prototype: void print_strings(const char *separator, const unsigned int n, ...);
	+ where separator is the string to be printed between the strings
	+ and n is the number of strings passed to the function
	+ You are allowed to use printf
	+ If separator is NULL, don’t print it
	+ If one of the string is NULL, print (nil) instead
	+ Print a new line at the end of your function
