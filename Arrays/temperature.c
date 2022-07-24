//Taking input in a two dimensional array to find temperature between two cities.
#include <stdio.h>
const int  week = 7;
const int city = 2;
int main(int argc, char const *argv[])
{
	int temperature[city][week];

	//using nested loop to ask user for values to store in a 2d array
	for(int i = 0; i < week; i++) {
		for (int j= 0; j < city; j++) {
			printf("Week %d, City %d: ", i, j);
			scanf("%d", &temperature[j][i]);

		}
	}
	printf("\nDisplaying values: \n\n");

	for(int i = 0; i < week; i++){
		for(int j = 0; j < city; j++) {
			printf("Week %d, Day %d = %d\n", j, i, temperature[j][i]);
		}
	}
	return 0;
}
