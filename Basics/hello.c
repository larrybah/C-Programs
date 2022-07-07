/*
The C programming language is a general purpose programming language, which relates closely to the way machines work. Understanding how computer memory works is an important aspect of the C programming language. Although C can be considered as "hard to learn", C is in fact a very simple language, with very powerful capabilities.

C is a very common language, and it is the language of many applications such as Windows, the Python interpreter, Git, and many many more. 

C is a compiled language - which means that in order to run it, the compiler (for example, GCC or Visual Studio) must take the code that we wrote, process it, and then create an executable file. This file can then be executed, and will do what we intended for the program to do.

How does this program work?

    1. All valid C programs must contain the main() function. The code execution begins from the start of the main() function.
    2. The printf() is a library function to send formatted output to the screen. 3. The function prints the string inside quotations.
    4. To use printf() in our program, we need to include stdio.h header file using the #include <stdio.h> statement.
    5. The return 0; statement inside the main() function is the "Exit status" of the program. It's optional.
    6. The \n takes the program to a new line.

*/
#include <stdio.h>
int main() {
    printf("Hello World!\n");
    return 0;
}