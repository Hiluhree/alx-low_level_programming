# 0x08-recursion

## Resources
+ [0x08. Recursion, introduction]()
+ [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
+ [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
+ [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=XGxbXMP6k8k)
+ [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=7XiIS6HobNs)

## Tasks
+ Task 0: [She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x08-recursion/0-puts_recursion.c): A function that prints a string, followed by a new line.

	+ Prototype: void puts_recursion(char s);
		- FYI: The standard library provides a similar function: puts. Run man puts to learn more.
+ Task 1: [Why is it so important to dream? Because, in my dreams we are together](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x08-recursion/1-print_rev_recursion.c): A function that prints a string in reverse.

	+ Prototype: void print_rev_recursion(char s);
+ Task 2: [Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x08-recursion/2-strlen_recursion.c): A  function that returns the length of a string.

	+ Prototype: int strlen_recursion(char s);
		- FYI: The standard library provides a similar function: strlen. Run man strlen to learn more. 
+ Task 3: [You mustn't be afraid to dream a little bigger, darling](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x08-recursion/3-factorial.c): A function that returns the factorial of a given number.

	+ Prototype: int factorial(int n);
	+ If n is lower than 0, the function should return -1 to indicate an error
	+ Factorial of 0 is 1
+ Task 4: [Once an idea has taken hold of the brain it's almost impossible to eradicate](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x08-recursion/4-pow_recursion.c): A function that returns the value of x raised to the power of y.

	+ Prototype: int _pow_recursion(int x, int y);
	+ If y is lower than 0, the function should return -1
		- FYI: The standard library provides a different function: pow. Run man pow to learn more.
+ Task 5: [Your subconscious is looking for the dreamer](): A function that returns the natural square root of a number.

	+ Prototype: int _sqrt_recursion(int n);
	+ If n does not have a natural square root, the function should return -1
		- FYI: The standard library provides a different function: sqrt. Run man sqrt to learn more.
