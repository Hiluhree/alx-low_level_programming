# 0x0B. C - malloc, free

## Resources
+ [Automatic and dynamic allocation, malloc and free](https://intranet.alxswe.com/concepts/62)
+ [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64)(stop at 6:50)

### Tasks
+ Task 0: [ Float like a butterfly, sting like a bee](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c): A function that creates an array of chars, and initializes it with a specific char.

	+ Prototype: char create_array(unsigned int size, char c);
	+ Returns NULL if size = 0
	+ Returns a pointer to the array, or NULL if it fails
+ Task 1: [The woman who has no imagination has no wings](): A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

	+ Prototype: char *_strdup(char *str);
	+ The strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
	+ Returns NULL if str = NULL
	+ On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
		- FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.
