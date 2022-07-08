#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);
    printf("The values of a is %d and b is %d before swaping\n",a,b);

    /*
      
      Swapping without using a third Number.
      a=a+b;
      b=a-b;
      a=a-b;
    Now here goes the logic (let us take a=1 and b=3)
    a=a+b, therefore a= 1+3=4;
    b=a-b, therefore a=4-3=1;
    a=a-b, therefore a= 4-1=3;
    ** Now the values of a and b are 3 and 1.

    */

    c=a;
    a=b;
    b=c;
    printf("The values of a is %d and b is %d after swaping\n", a,b);
return 0;
}