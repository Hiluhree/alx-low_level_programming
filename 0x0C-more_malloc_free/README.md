# 0x0C. C - More malloc, free

## Resources
+ [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)

##### Man or help
- exit (3)
- calloc
- realloc

### Tasks
+ Task 0: [Trust no one](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x0C-more_malloc_free/0-malloc_checked.c): A function that allocates memory using malloc.

	+ Prototype: void malloc_checked(unsigned int b);
	+ Returns a pointer to the allocated memory
	+ if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
+ Task 1: [string_nconcat](): A function that concatenates two strings.

	+ Prototype: char string_nconcat(char *s1, char *s2, unsigned int n);
	+ The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
	+ If the function fails, it should return NULL
	+ If n is greater or equal to the length of s2 then use the entire string s2
	+ if NULL is passed, treat it as an empty string
