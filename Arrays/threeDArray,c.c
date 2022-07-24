// A program to take user input and store them in a Three Dimensional Array

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int test[2][3][2];

	// Ask for 12 values as it is a three dimensional array, which is  2*3*2 = 12
	printf("Enter 12 values: "); 

	//take user input using three for Loops 
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 3; j++) {
			for(int k = 0; k < 2; k++) {
				scanf("%d", &test[i][i][k]);
			}
		}
	}
    
    //Printing the values entered by the user
	printf("\nDisplaying Values: \n");
	for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {

            for (int k = 0; k < 2; k++) {

                printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
      }
    }
  }
return 0;
}