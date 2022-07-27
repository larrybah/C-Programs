// Find the Largest Element 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n;
	double *data;
	printf("Enter the total number of elements: ");
	scanf("%d", &n);

	// Allocating memory for n elements
	data = (double *)calloc(n, sizeof(double));
	if(data == NULL) {
		printf("Error!!! Memory not allocated.");
		exit(0);
	}

     
	// Storing numbers entered by the user.
	//printf("Enter numbers%d: ", i + 1);
	for(int i = 0; i < n; i++) {
		printf("Enter numbers %d: ", i + 1);
		scanf("%lf", data + i);
	}

	// Finding the largest number
	for(int i = 1; i < n; i++) {
		if(*data < *(data + i)) {
			*data = *(data + i);
		}
	}
	printf("\nLargest number = %.2lf\n", *data);

	free(data);
	return 0;
}