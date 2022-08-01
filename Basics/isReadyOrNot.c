// A program to check if a citizen of a country is qualified to vote at a particular age.
#include <stdio.h>

int main() {
    int age;

    printf("Enter age: "); // Ask user for input
    scanf("%d", &age);

    if(age >= 18) { // Checks codition to see if a voter is qualified to vote
        printf("You can vote at %d\n", age);
    }else 
        printf("You cannot vote at %d\n", age);
return 0;
}