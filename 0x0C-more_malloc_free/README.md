# 0x0C. C - More malloc, free

## Resources
+ [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)

##### Man or help
- exit (3)
- calloc
- realloc

### Tasks
+ Task 0: [Trust no one](): A function that allocates memory using malloc.

	+ Prototype: void malloc_checked(unsigned int b);
	+ Returns a pointer to the allocated memory
	+ if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
