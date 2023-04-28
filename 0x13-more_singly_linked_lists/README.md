# 0x13. C - More singly linked lists
## Resources
### Tasks

+ Task 0: [Print list](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/0-print_listint.c): A function that prints all the elements of a listint_t list.

	+ Prototype: size_t print_listint(const listint_t \*h);
	+ Return: the number of nodes
	+ Format: see example
	+ You are allowed to use printf
+ Task 1: [List length](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/1-listint_len.c): A function that returns the number of elements in a linked listint_t list.

	+ Prototype: size_t listint_len(const listint_t \*h);
+ Task 2: [Add node](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/2-add_nodeint.c): A function that adds a new node at the beginning of a listint_t list.

	+ Prototype: listint_t \*add_nodeint(listint_t \*\*head, const int n);
	+ Return: the address of the new element, or NULL if it failed
+ Task 3: [Add node at the end](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/3-add_nodeint_end.c): A function that adds a new node at the end of a listint_t list.

	+ Prototype: listint_t \*add_nodeint_end(listint_t \*\*head, const int n);
	+ Return: the address of the new element, or NULL if it failed
+ Task 4: [Free list](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/4-free_listint.c): A function that frees a listint_t list.

	+ Prototype: void free_listint(listint_t \*head);
+ Task 5: [Free](https://github.com/Hiluhree/alx-low_level_programming/blob/master/0x13-more_singly_linked_lists/5-free_listint2.c): A function that frees a listint_t list.

	+ Prototype: void free_listint2(listint_t \*\*head);
	+ The function sets the head to NULL
+ Task 6: [Pop](): A function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

	+ Prototype: int pop_listint(listint_t \*\*head);
	+ if the linked list is empty return 0
