/*
A union is a user-defined type similar to structs(structures) except for one key difference.
Structures allocate enough space to store all their members, whereas unions can only hold one
member value at a time.

-- Define a union
union car {
	char name[50];
	int price;
};

when a union is defined, it creates a user=defined type. However, no memory is allocated.
To allocate memory for a given union type and work with it, we need to create variables.

eg1.

union car {
	char name[50];
	int price;
};

int main() {
	union car car1, car2, *car3;
	return 0;

}

eg2.

union car {
	char name[50];
	int price;
} car1, car2, *car3;

In both cases, union car1, car2,
and a union pointer car3 of union car type are created.


Access members of a union

We use the . operator to access members of a union. And to access pointer variables, we use the -> operator.

In the above example,

  * To access price for car1, car1.price is used.
  * To access price using car3, either (*car3).price or car3->price can be used.

*/

// Accessing Union Members

#include <stdio.h>
union Job {
	float salary;
	int workerNo;
} j;

int main(int argc, char const *argv[])
{
	j.salary = 12.3;

	// when j.workerNo is assigned a value,
	// j.salary wil no longer hold 12.3
	j.workerNo = 100;
	j.salary = 45.4;

	printf("Salary = %.1f\n", j.salary);
	printf("Number of workers = %d\n", j.workerNo);
	return 0;
}







