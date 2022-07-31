#include <stdio.h>
struct student {
	char name[50];
	int age;
};

// fucntion prototype
void display(struct student s);

int main(int argc, char const *argv[])
{
	struct student s1;

	printf("Enter name: ");

	// read string input from the user until \n is entered
	// \n is discarded
	scanf("%[^\n]%*c", s1.name);

	printf("Enter age: ");
	scanf("%d", &s1.age);

	display(s1); // passing struct as an argument

	return 0;
}

void display(struct student s) {
	printf("\nDisplaying User Information\n");
	printf("Name: %s\n", s.name);
	printf("Age: %d\n", s.age);
}