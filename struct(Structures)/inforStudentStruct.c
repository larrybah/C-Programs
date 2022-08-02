// A program to store information of students

// Example One Uncomment the code below this line to see

// #include <stdio.h>
// #include <string.h>

// // create a student structure
// struct Student {
// 	char name[30];
// 	int age;
// 	float marks;
// } student1; // assign it a variable student1

// int main(int argc, char const *argv[])
// {
// 	strcpy(student1.name, "Alimamy Kargbo"); // give student1 a name 

// 	student1.age = 21;
// 	student1.marks = 67.5;

//     // Display student information
// 	printf("Name: %s\n", student1.name);
// 	printf("Students Age: %d\n", student1.age);
// 	printf("Students Marks: %.2f\n", student1.marks);
// 	return 0;
// }

// Example 2

#include <stdio.h>
#include <string.h>

struct Student {
	char name[50];
	int roll;
	float marks;
} s;

int main(int argc, char const *argv[])
{
	printf("Enter Information: \n");
	printf("Enter name: ");
	fgets(s.name, sizeof(s.name), stdin); // ask user to input name

    // ask to input user infor
	printf("Enter roll number: ");
	scanf("%d", &s.roll);
	printf("Enter marks: ");
	scanf("%f", &s.marks);

	printf("\nDisplaying Information: \n"); // Displaying user entered infor
	printf("Name: ");
	printf("%s", s.name);
	printf("Roll number: %d\n", s.roll);
	printf("Marks: %.1f\n", s.marks);
	
	return 0;
}
