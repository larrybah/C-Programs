// A program that prints the Sum of N numbers
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i, n, sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);

	for(i=0; i<=n; i++) {
		sum+=i;
	}
	printf("%d\n", sum);
	return 0;
}