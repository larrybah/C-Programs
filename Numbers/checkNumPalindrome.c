// A program that reverses a given number and check if it is a palindrome.
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int number, n, rev=0, x; // Declare variables

	printf("Enter a number: ");
	scanf("%d", &n); // Ask user for number

	number = n;

	while(n>0) {
		x=n%10;
		rev=rev*10+x;
		n=n/10;
	}

	// check the condition
	if(number == rev)
		printf("The given number %d is a palindrome\n", rev);
	else
		printf("The given number %d is not a palindrome\n", rev);

	return 0;
}