// A program that prints out the sum of all even number between two given numbers.
#include <stdio.h>
int main(int argc, char const *argv[])
 {
 	int firstNumber, i, secondNumber, evenNum=0;

 	printf("Enter two Numbers: ");
 	scanf("%d %d", &firstNumber, &secondNumber);

 	for(i = firstNumber; i <= secondNumber; i++) {
 		if(i%2==0){
 			evenNum += i;
 		}
 	}

 	printf("The sum of all integers divisible by 2 between %d and %d is %d\n", firstNumber, secondNumber, evenNum);
 
 	return 0;
 } 