#include <stdio.h>
#include <stdlib.h>

struct person {
	int age;
	float weight;
	char name[30];
};

int main(int argc, char const *argv[])
{
	struct person *ptr;
	int i, n;

	printf("Enter the number of people: ");
	scanf("%d", &n);

	// allocating memory for n numbers of struct person
	ptr = (struct person*) malloc(n * sizeof(struct person));

	for(i = 0; i < n; i++) {
		printf("Enter first name and age respectively: ");
		/*
          To access members of 1st struct person,
          ptr->name and ptr-> is used

          To access members of 2nd struct person,
          (ptr+1)->name and (ptr+1)->age is used

		*/
		scanf("%s %d", (ptr+1)->name, &(ptr+i)->age);
	}

	printf("\nDisplaying Information: \n");
	for(i = 0; i < n; i++) {
		printf("Name: %s\tAge: %d\n", (ptr+i)->name, (ptr+i)->age);

	}
	return 0;
}

