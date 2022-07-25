/* Pointers(Pointer variables) are special variables that are used to store addresses rather than values.

Pointer Syntax: 
Pointer Declarations :
int* p;
int *p1;
int * p2; 

int* p1, p2; ==> Here, we have declared a pointer p1 and a normal variable p2.

Assigning addresses to Pointers
int* pc, c;
c = 5;
pc = &c; ==> Here, 5 is assigned to the c variable. and the address of c is assigned to the pc pointer.

NOTE: In the above example, pc is a pointer, not *pc. YOU CANNOT AND SHOULD NOT DO SOMETHING LIKE *pc = &c.

By the way, * is called the dereference operator(when working with pointers). It operates on a pointer and gives the value stored in that pointer.

Relationship Between Arrays and Pointers

*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x[4];
	int i;

	for(i = 0; i < 4; i++) {
		printf("&x[%d] = %p\n", i, &x[i]);
	}

	printf("Address of array x: %p \n", x);
	return 0;
}  
    /* 

    There is a difference of 4 bytes between two consecutive elements of 
    array x. It is because the size of int is 4 bytes(on our compiler).
    
    From the above example, it is clear that &x[0] is equivalent to x. 
    And  x[0] is equivalent to *x.

    Similarly:

    &x[1] is equivalent to x+1 and x[1] is equivalent to *(x+1).
    &x[2] is equivalent to x+2 and x[2] is equivalent to *(x+2).
 
    Basically, &x[i] is equivalent to x+i and x[i] is equivalent to *(x+i).

    */