// A program to reverse a given number
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int number, n, rev=0, x;
	printf("Enter a number: ");
	scanf("%d", &n);
	number = n;

	while(n>0) {
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}
	printf("The reverse of %d is %d\n", number, rev);
	return 0;
}