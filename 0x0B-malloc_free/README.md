# 0x0B. C - malloc, free

## Resources
+ [Automatic and dynamic allocation, malloc and free](https://intranet.alxswe.com/concepts/62)
+ [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64)(stop at 6:50)

### Tasks
+ Task 0: [ Float like a butterfly, sting like a bee](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c): A function that creates an array of chars, and initializes it with a specific char.

	+ Prototype: char create_array(unsigned int size, char c);
	+ Returns NULL if size = 0
	+ Returns a pointer to the array, or NULL if it fails
+ Task 1: [The woman who has no imagination has no wings](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c): A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

	+ Prototype: char *_strdup(char *str);
	+ The strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
	+ Returns NULL if str = NULL
	+ On success, the strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
		- FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.
+ Task 2: [He who is not courageous enough to take risks will accomplish nothing in life](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c): A function that concatenates two strings.

	+ Prototype: char str_concat(char *s1, char *s2);
	+ The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
	+ if NULL is passed, treat it as an empty string
	+ The function should return NULL on failure
+ Task 3: [If you even dream of beating me you'd better wake up and apologize](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c): A function that returns a pointer to a 2 dimensional array of integers.

	+ Prototype: int alloc_grid(int width, int height);
	+ Each element of the grid should be initialized to 0
	+ The function should return NULL on failure
	+ If width or height is 0 or negative, return NULL
+ Task 4: [ It's not bragging if you can back it up](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c): A function that frees a 2 dimensional grid previously created by your alloc_grid function.

	+ Prototype: void free_grid(int grid, int height);
	+ Note that we will compile with your alloc_grid.c file. Make sure it compiles.
+ Task 5: [It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x0B-malloc_free/100-argstostr.c): A function that concatenates all the arguments of your program.

	+ Prototype: char argstostr(int ac, char av);
	+ Returns NULL if ac == 0 or av == NULL
	+ Returns a pointer to a new string, or NULL if it fails
	+ Each argument should be followed by a \n in the new string
+ Task 6: [I will show you how great I am](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x0B-malloc_free/101-strtow.c): A function that splits a string into words.

	+ Prototype: char **strtow(char *str);
	+ The function returns a pointer to an array of strings (words)
	+ Each element of this array should contain a single word, null-terminated
	+ The last element of the returned array should be NULL
	+ Words are separated by spaces
	+ Returns NULL if str == NULL or str == ""
	+ If your function fails, it should return NULL
