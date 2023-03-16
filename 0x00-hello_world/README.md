# 0x00. C - Hello, World </br>

## Resources</br>
+ [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230316%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230316T064759Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=947aab0c0c77b7c54a2017c3b52b9933b12f0f0767766f8d062e1ce45f27f7ad)(*you do not have to learn everything in there yet, but make sure you read it entirely first*)
+ [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
+ [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
+ [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
+ [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
+ [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
+ [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
+ [Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)
+ [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21)(*Look at only after you finish consuming the other resources*)
+ [Linus Torvalds on C vs. C++](http://harmful.cat-v.org/software/c++/linus) (*Look at only after you finish consuming the other resources*)

## More Info
### Betty linter
To run the Betty linter just with command betty <filename>:

+ Go to the [Betty](https://github.com/holbertonschool/Betty) repository
+ Clone the [repo](https://github.com/holbertonschool/Betty) to your local machine
+ cd into the Betty directory
+ Install the linter with sudo ./install.sh
+ emacs or vi a new file called betty, and copy the script below:

	#!/bin/bash
	# Simply a wrapper script to keep you from having to use betty-style
	# and betty-doc separately on every item.
	# Originally by Tim Britton (@wintermanc3r), multiargument added by
	# Larry Madeo (@hillmonkey)

	BIN_PATH="/usr/local/bin"
	BETTY_STYLE="betty-style"
	BETTY_DOC="betty-doc"

	if [ "$#" = "0" ]; then
    		echo "No arguments passed."
   		exit 1
	fi

	for argument in "$@" ; do
    		echo -e "\n========== $argument =========="
   		${BIN_PATH}/${BETTY_STYLE} "$argument"
    		${BIN_PATH}/${BETTY_DOC} "$argument"
	done
+ Once saved, exit file and change permissions to apply to all users with chmod a+x betty
+ Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
  - You can now type betty <filename> to run the Betty linter!

## Tasks
+ Task 1: [Preprocessor]()
