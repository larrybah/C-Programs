// Passing Array to function as a Pointer
#include <stdio.h>

void sort(int, int *);
void binarySearch(int, int, int *, int);

int main(int argc, char const *argv[])
{
	int i, n, searchNo;
	printf("Enter size of array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the number in sorted order: \n");
	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
	}

	sort(n, &a[0]);

	printf("Sorted Array is\n");
	for(i=0; i<n; i++) {
		printf("%d\n", a[i]);
	}

	printf("Enter Elements to be Searched: \n");
	scanf("%d", &searchNo);
	binarySearch(1, n, &a[0], searchNo);
	
	return 0;
}

void sort(int n, int *a) {
	int i, j, temp;
	for(i=0; i<n; i++) { // for sorting in ascending order
		for(j=i+1; j<n; j++) {
			if(a[i]>a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

	}
}

void binarySearch(int low, int high, int *a, int searchNo) {
	int mid;
	if(low>high) {
		printf("Search is not Successful\n");
		return;
	}

	mid = (low+high)/2;
	if(a[mid]==searchNo) {
		printf("Search is Successful\n");
		return;
	} else if (searchNo < a[mid]) {
		binarySearch(low, mid-1, a, searchNo);
	} else if (searchNo > a[mid]) {
		binarySearch(mid+1, high, a, searchNo);
	}
}


