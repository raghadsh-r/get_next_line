*This project has been created as part of the 42 curriculum by ralshraw*
# Description
this project learn me how to read from file even when file really big , now im really to read big data without Data Loss i can mange file 
- > this code help you to read from file 
- > in the futere i will improve it to be faster 
- > now you dont have problem to read form any file 

# Instructions
* You can run it just by this command: make
* If you want to delete .o files: make clean
* You must have a C compiler and valgrind if you want to see memory leaks.
* If you face any problems or issues, you can use terminal help.
* in the main ther function read you can put your file name to read from.
* to know more about function read use help terminal .
# Resources
- > some of peer explin to me the project 
- > https://en.wikipedia.org/wiki/Static_variable
- > https://pubs.opengroup.org/onlinepubs/009604599/functions/read.html
- > https://www.geeksforgeeks.org/c/compiling-a-c-program-behind-the-scenes/ 
- > ulimit -n

### Ai used

if (file && file[0])
	{
		line =file;
		file = NULL;
		return (line);
	}
here i have wrong so he help me to fix it
also i used it to understand some consept 
i try always to search not depend on it.
# algorithm
I don't follow any specific algorithm .... but what i make 
Simply read and merge then, check if a new line has been found—if so return it....... Otherwise  repeat the process until a new line is found or the end of the file is reached 
