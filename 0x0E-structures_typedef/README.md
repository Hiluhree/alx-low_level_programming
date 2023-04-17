# 0x0E. C - Structures, typedef
## Resources
[struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
[Documentation: structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)
[Documentation: structures](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
[typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
**Programming in C** by Stephen Kochan - Chapter 8, Working with Structures p163-189
[The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/) (Advanced - not mandatory)

### Tasks
+ Task 0: [Poppy](): Defining a new type struct dog with the following elements:

	+ name, type = char *
	+ age, type = float
	+ owner, type = char *
+ Task 1: [A dog is the only thing on earth that loves you more than you love yourself](): A function that initialize a variable of type struct dog

	+ Prototype: void init_dog(struct dog *d, char *name, float age, char *owner*);
+ Task 2: [ A dog will teach you unconditional love. If you can have that in your life, things won't be too bad](): A function that prints a struct dog

	+ Prototype: void print_dog(struct dog *d*);
	+ Format: see example bellow
	+ You are allowed to use the standard library
	+ If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
	+ If d is NULL print nothing.
+ Task 3: [Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read]():Define a new type dog_t as a new name for the type struct dog.
+ Task 4: [A door is what a dog is perpetually on the wrong side of](): A function that creates a new dog.

	+ Prototype: dog_t *new_dog(char *name, float age, char *owner*);
	+ You have to store a copy of name and owner
	+ Return NULL if the function fails
+ Task 5: [How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg](): A  a function that frees dogs.

	+ Prototype: void free_dog(dog_t *d);
