# 0x07. C - Even more pointers, arrays and strings

## Resources

+ [C - Pointer to Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
+ [C – Pointer to Pointer with example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
+ [Multi-dimensional Arrays in C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
+ [Two dimensional (2D) arrays in C programming with example](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)

## Tasks
+ Task 0: [memset](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/0-memset.c): A function that fills memory with a constant byte.

	+ Prototype: char *_memset(char *s, char b, unsigned int n);
	+ The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
	+ Returns a pointer to the memory area s
		- FYI: The standard library provides a similar function: memset. Run man memset to learn more.
+ Task 1: [memcpy](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/1-memcpy.c): A function that copies memory area.

	+ Prototype: char memcpy(char *dest, char *src, unsigned int n);
	+ The memcpy() function copies n bytes from memory area src to memory area dest
	+ Returns a pointer to dest
		- FYI: The standard library provides a similar function: memcpy. Run man memcpy to learn more.
+ Task 2: [strchr](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/2-strchr.c): A function that locates a character in a string.

	+ Prototype: char *_strchr(char *s, char c);
	+ Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
		- FYI: The standard library provides a similar function: strchr. Run man strchr to learn more.
+ Task 3: [strspn](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x07-pointers_arrays_strings/3-strspn.c): A  function that gets the length of a prefix substring.

	+ Prototype: unsigned int strspn(char *s, char *accept);
	+ Returns the number of bytes in the initial segment of s which consist only of bytes from accept
		- FYI: The standard library provides a similar function: strspn. Run man strspn to learn more.
+ Task 4: [strpbrk](): A  function that searches a string for any of a set of bytes.

	+ Prototype: char strpbrk(char *s, char *accept);
	+ The strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
	+ Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
		- FYI: The standard library provides a similar function: strpbrk. Run man strpbrk to learn more.
