/*
 You can create structures within a structure in C Programming.
 Exp: 
 struct complex {
	int imag;
	float real;
 };

 struct number {
	struct complex comp; -- initializing the complex struct from above in this one.
    int integer;
 } num1, num2;

 suppose, you want to set imag of num2 variable to 11. 
 Here is how you can do it.

 num2.comp.imag = 11;

*/



#include <stdio.h>

struct complex {
	int imag;
	float real;
};


struct number {
	struct complex comp;
	int integer;
} num1;

int main(int argc, char const *argv[])
{
	// initialize complex variables
	num1.comp.imag = 11;
	num1.comp.real = 5.25;

	// initialize number variables
	num1.integer = 6;

	// print struct variables
	printf("\nImaginary Part: %d\n", num1.comp.imag);
	printf("Real Part: %.2f\n", num1.comp.real);
	printf("Integer: %d\n", num1.integer);

	return 0;
}












