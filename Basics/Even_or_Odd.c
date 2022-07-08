#include <stdio.h>
int main(){
    /*
    1. Here we declared an integer 'i';
    2. Then we take input from the user using scanf statement.
    3. As we know the modulus (%) operator is used to return the remainder of two values (10%3=1; 12%2=0).
    4. So if you do modulus with 2 then the remainder will be 'zero' for Even and '1' for Odd numbers.
    5. if we divide 'i' with 2 using mod operator then depending upon condition the respective 'printf' will be executed.
    */
    int i;
    printf("Please enter a number: ");
    scanf("%d", &i); // the scanf read formated input from the standard input such as the keyboard from the user. 

    if(i%2==0){
        printf("Even: %d\n", i);
    }else{
        printf("Odd: %d\n", i);
    }
    return 0;
}