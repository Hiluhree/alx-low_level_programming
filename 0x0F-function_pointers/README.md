#0x0F. C - Function pointers

## Resources
+ [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
+ [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
+ [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
+ [why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s)
+ [Everything you need to know about pointers in C](https://boredzo.org/pointers/)

### Tasks
+ Task 0: [What's my name](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x0F-function_pointers/0-print_name.c): A function that prints a name.

	+ Prototype: void print_name(char *name, void (*f)(char ));
+ Task 1: [If you spend too much time thinking about a thing, you'll never get it done](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x0F-function_pointers/1-array_iterator.c): A function that executes a function given as a parameter on each element of an array.

	+ Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
	+ where size is the size of the array
	+ and action is a pointer to the function you need to use
+ Task 2: [To hell with circumstances; I create opportunities](): A function that searches for an integer.

	+ Prototype: int int_index(int *array, int size, int (*cmp)(int));
	+ where size is the number of elements in the array array
	+ cmp is a pointer to the function to be used to compare values
	+ int_index returns the index of the first element for which the cmp function does not return 0
	+ If no element matches, return -1
	+ If size <= 0, return -1
