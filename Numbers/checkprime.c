#include <stdio.h>

int checkPrimeNumber(int n);
int main(int argc, char const *argv[])
{
	int n1, n2, i, flag;

	printf("Enter two positive Number: ");
	scanf("%d %d", &n1, &n2);

	// swap n1 and n2 if n1 > n2
	if (n1 > n2) {
		n1 = n1 + n2;
		n2 = n1 - n2;
		n1 = n1 - n2;
	}

	printf("Prime numbers between %d and %d are ", n1, n2);
	for (i = n1 + 1; i < n2; i++) {
		flag = checkPrimeNumber(i);

        if (flag == 1) {
        	printf("%d ", i);
        }
	}

	return 0;
}

// user-defined function to check prime number
int checkPrimeNumber(int n) {
	int j, flag = 1;
	for(j = 2; j <= n / 2; ++j) {

		if(n % j == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}