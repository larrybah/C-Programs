#include <stdio.h>
int main() {
    int i; 
    // this is for CAPITAL LETTERS 
    for(i = 65; i <= 90; i++){  
    //Now this program is like printing 65 to 90, But using ASCII Values capital A is Represented as 65 and Z as 90.
        printf(" %c ", i);
    }
    printf("\n");
    // For small letters 
    for(i = 97; i <=122; i++) {
        printf(" %c ", i);
    }
    printf("\n");
return 0;
}