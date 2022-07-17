// A program that prints out a fibonacci series of a given number
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a = 0, b = 1, num, c , count=2;

	printf("Enter a number to obtain fibonacci series: ");
	scanf("%d", &num);

	printf("The Series is ");
	printf("%d %d ",a, b);

	while(count<num){
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
		count++;
	}
	printf("\n"); // send terminal text on new line
	return 0;
}