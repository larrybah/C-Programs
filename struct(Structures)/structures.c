/*
In C Programming, a struct(structure) is a collection of variables(can be of different
types) under a single name.

Before you can create structure variables, you need to define its data type.
To define a struct, the struct keyword is used.

-- Syntax of struct
struct structureName {
	dataType member1;
	dataType member2;
};

- Example
Here, a derived type struct Person is defined. Now, you can create variables 
of this type.

struct Person {
	char name[50];
	int citNo;
	float salary;
}; 

-- Access Members of a Structure
There are two types of operators used for accessing members of a structure.
1. " . " Member operator
2. " -> " Structure pointer operator.
*/

//Example One

#include <stdio.h>
#include <string.h>

// create struct with person1 and person2 variable
struct Person {
	char name[50];
	int citNo;
	float salary;
} person1, person2;

int main(int argc, char const *argv[])
{
	//struct Variable 2

	// assign value to name of person1
	strcpy(person1.name, "Phil Collins");


	// assign values to other person1 variables
	person1.citNo = 1963;
	person1.salary = 2500;

	// print struct variables

	printf("Name: %s\n",person1.name);
	printf("Citizenship No. %d\n", person1.citNo);
	printf("Salary: %.2f\n", person1.salary);

// struct variable 2

    strcpy(person2.name, "Abdul Jabbar");

    person2.citNo = 18703;
    person2.salary = 35000;

    printf("\n\nName; %s\n", person2.name);
    printf("Citizenship No. %d\n", person2.citNo);
    printf("Salary: %.2f\n", person2.salary);



	return 0;
}


/*

Why structs in C?

Suppose, you want to store information about a person: his/her name, citizenship number, and salary.
You can create different variables name, citNo and salary to store this information.

What if you need to store information of more than one person? 
Now,  you need to create different variables for each information per person: name1, citNo1, salary1, name2, citNo2, salary2, etc.

A better approach would be to have a collection of all related information under a single name Person structure and use it for every person.

*/