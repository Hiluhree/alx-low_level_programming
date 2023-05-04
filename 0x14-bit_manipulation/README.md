# 0x14. C - Bit manipulation
## Resources
+ [Youtube](https://www.youtube.com/results?search_query=bitwise+operators+in+c)
+ [Google](https://www.google.com/webhp?q=bit+manipulation+C)

### Tasks
+ Task 0: [0](): A function that converts a binary number to an unsigned int.

	+ Prototype: unsigned int binary_to_uint(const char \*b);
	+ where b is pointing to a string of 0 and 1 chars
	+ Return: the converted number, or 0 if
		- there is one or more chars in the string b that is not 0 or 1
		- b is NULL
+ Task 1: [1](): A function that prints the binary representation of a number.

	+ Prototype: void print_binary(unsigned long int n);
	+ Format: see example
	+ You are not allowed to use arrays
	+ You are not allowed to use malloc
	+ You are not allowed to use the % or / operators
