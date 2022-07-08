#include <stdio.h>
int main() {
    int i;
    //While Loop version
    while(i<100) {
        i++;
        printf("Number: %d\n", i);
    }

    //For Loop version
    /*
      where i start from 1 and i is <= (less than or equal to one hundred)100
      i++ countinues to increment i by one, at every spin of the loop.
      %d prints the integer numbers coming from i.
       */
    // for(i=1; i<=100; i++) {
    //     printf("Number: %d\n", i);
    // }
return 0;
}