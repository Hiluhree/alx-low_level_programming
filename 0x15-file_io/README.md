# 0x15. C - File I/O
## Resources
+ [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)
+ [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=e-srF6c3TJ8)

#### man or help:
+ open
+ close
+ read
+ write
+ ```dprintf```

### Tasks
+ Task 0: [Tread lightly, she is near](): A function that reads a text file and prints it to the ```POSIX``` standard output.

	+ Prototype: ```ssize_t read_textfile(const char *filename, size_t letters);```
	+ where letters is the number of letters it should read and print
	+ returns the actual number of letters it could read and print
	+ if the file can not be opened or read, return ```0```
	+ if ```filename``` is ```NULL``` return ```0```
	+ if ```write``` fails or does not write the expected amount of bytes, return ```0```
