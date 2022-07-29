/*
In C Programming, a string is a sequence of characters terminated with a null character '\0' 

```char c[] = "string";```

When the compiler encounters a sequence of characters enclosed in the double quotation marks, it appends a null character '\0' at the end by default.When the compiler encounters a sequence of characters enclosed in the double quotation marks, it appends a null character '\0' at the end by default.

Innitializing a string without leaving addtional space for the null cahracter is bad and you should avoid that.

```char c[5] = "abcde"``` // bad code


Arrays and strings are second-class citizens in C; they do not support the assignment operator once it is declared. For example,

```char c[100];
c = "C programming";```  // Error! array type is not assignable.


```
#include <stdio.h
int main() {
    char name[30];
    printf("enter name: ");
    fgets(name, sizeof(name) stdin); // read string
    printf("name: ");
    puts(name);
return 0;
}
```
Here, we have used fgets() function to read a string from the user.

fgets(name, sizeof(name), stdlin); // read string

The sizeof(name) results to 30. Hence, we can take a maximum of 30 characters as input which is the size of the name string.

To print the string, we have used puts(name);.

Note: The gets() function can also be to take input from the user. However, it is removed from the C standard.

It's because gets() allows you to input any length of characters. Hence, there might be a buffer overflow.

*/

#include <stdio.h>
void reverseSentence();
int main() {
    printf("Enter a Sentence: ");
    reverseSentence();
    printf("\n");
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if(c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
    
}