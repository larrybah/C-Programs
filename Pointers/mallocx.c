/*

As you know, an array is a collection of a fixed number of values.
Once the size of an array is declared, you cannot change it.

Sometimes the size of the array you declared may be insufficient.
To solve this issue, you can allocate memory manually during run-time.
This is known as dynamic memory allocation in C programming.

To allocate memory dynamically, library functions are malloc(), calloc(),
realloc(), and free() are used. These functions are defined in the <stdlib.h> header file.


malloc()
********

The name "malloc" stands for memory allocation.

The malloc() function reserves a block of memory of the specified number of bytes.
And, it returns a pointer of void which can be casted into pointers of any form.

syntax of malloc()
ptr = (castType*) malloc(size)

example: 
ptr = (float*) malloc(100 * sizeof(float));

The above statement allocates 400 bytes of memory. It's because the size of float is 4 bytes.
And, the pointer ptr holds the address of the first byte in the allocated memory.

The expression results in a NULL pointer if the memory cannot be allocated.


calloc()
********
The name "calloc" stands for contiguous allocation.
The malloc() function allocates memory and leaves the memory uninitialized,
whereas the calloc() function allocates memory and initializes all bits to zero.

syntax of calloc()
ptr = (castType*)calloc(n, size);

example: 
ptr = (float*) calloc(25, sizeof(float));
The above statement allocates contiguous space in memory for 25 elements of type float.


free()
Dynamically allocated memory created with either calloc() or malloc()
doesnt get freed on their own. You must explicitly use free() to release the space

syntax of free()
free(ptr);

This statement free the space allocated in the memory pointed by ptr.
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int n, i, *ptr, sum = 0;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	ptr = (int*) malloc(n * sizeof(int));

	// if memory cannot be allocated
	if(ptr == NULL) {
		printf("error! memory not allocated.\n");
		exit(0);
	}

	printf("Enter elements: ");
	for(i = 0; i<n; i++) {
		scanf("%d", ptr + i);
		sum += *(ptr + i);
	}

	printf("Sum = %d\n", sum);

	// De-allocating the memory
	free(ptr);
	return 0;
}