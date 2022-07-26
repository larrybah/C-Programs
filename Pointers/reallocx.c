/* realloc()

If the dynamically allocated memory is insufficient or more than required,
you can change the size of previously allocated memory using the realloc() function.

syntax for realloc()
ptr = realloc(ptr, x); ==> here, ptr is reallocated with a new size x.


*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int *ptr, i, n1, n2;
	printf("Enter size: ");
	scanf("%d", &n1);

	ptr = (int*) malloc(n1 * sizeof(int));

	printf("Addresses of previously allocated memory: \n");
	for(i=0; i<n1; i++) {
		printf("%pc\n", ptr + i);
	}
	printf("\nEnter the new size: ");
	scanf("%d", &n2);

	// reallocating the memory
	ptr = realloc(ptr, n2 * sizeof(int));

	printf("Addresses of newly  allocated memory: \n");
	for(i = 0; i < n2; i++) {
		printf("%pc\n", ptr + i);
	}
	free(ptr);
	return 0;
}