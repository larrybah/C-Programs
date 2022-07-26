// A Program to calculate the sum of n numbers entered by the user
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, *ptr, sum =0;
	printf("Enter number of elements: ");
	scanf("%d", &n);

	ptr = (int*) calloc(n, sizeof(int));
	if(ptr == NULL) {
		printf("Error! memory not allocated.\n");
		exit(0);
	}

	printf("Enter elements: ");
	for(int i = 0; i < n; i++) {
		scanf("%d", ptr + i);
		sum += *(ptr + i);
	}

	printf("Sum = %d", sum);
	free(ptr);
	return 0;
}