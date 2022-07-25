// Pass a two Dimensional array to a function and  display them

#include <stdio.h>
void displayNumbers(int num[][2]);

int main() {
	int num[2][2];
	printf("Enter 4 number (2X2): ");

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			scanf("%d", &num[i][j]);
		}
	}

	// passing a multi-dimentional array to function
	displayNumbers(num);

return 0;
}

void displayNumbers(int num[2][2]) {
	printf("\nDisplaying Array Numbers: \n");

	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			printf("%d\n", num[i][j]);
		}
	}
}