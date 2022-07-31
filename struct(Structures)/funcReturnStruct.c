#include <stdio.h>
struct student {
	char name[50];
	int age;
};

// function prototype
struct student getInformation();

int main(int argc, char const *argv[])
{
	struct student s;

	s = getInformation();

	printf("\nDisplaying Information\n");
	printf("Name: %s\n", s.name);
	printf("Roll: %d\n", s.age);

	return 0;
}

struct student getInformation() {
	struct student s1;

	printf("Enter name: ");
	scanf("%[^\n]%*c", s1.name);

	printf("Enter age: ");
	scanf("%d", &s1.age);

	return s1;
}