/*
-- Keyword typedef
We use the typedef keyword to create an alias name for data types.
It is commonly used with structures to simplify the syntax of declaring 
variable.

-- example
typedef struct Distance {
	int feet; 
	float inch
} distance;

int main() {
	distance d1, d2;
}
*/

#include <stdio.h>
#include <string.h>

// struct with typedef person
typedef struct Person {
	char name[50];
	int citNo;
	float salary;
} person;

int main(int argc, char const *argv[])
{
	// create first person variable of p1
	person p1;

	// assign value to name of p1
	strcpy(p1.name, "King Kunta");

	// assign values to other p1 variables
	p1.citNo = 1894;
	p1.salary = 34000;

	// print struct variables
	printf("\nName: %s\n", p1.name);
	printf("Citizenship No. %d\n", p1.citNo);
	printf("Salary: %.2f\n", p1.salary);
	return 0;
}