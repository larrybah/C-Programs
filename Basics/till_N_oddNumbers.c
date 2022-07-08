#include <stdio.h>
int main(){
    int i, n;
    /*
     1. Here we declared 'i' and 'n'
     2. Then we prompted the user for a number 
     3. After taking the Number 'n' a for Loop is used to traverse from 'zero' to the number which is 'n'(25 or 100)
     4. so by using modulus operator if the result is 1 then it  gets printed  otherwise the loop continues the next iteration.
     5. So the ouput here is to print all Odd Numbers form Zero to 'n'.
    */

    printf("Enter a Number: ");
    scanf("%d", &n);
    for(i=0; i<=n; i++) 
    {
        if(i%2==1)
           printf("%d\n", i);
        else
           continue;   
    }
    printf("\n");
return 0;
}