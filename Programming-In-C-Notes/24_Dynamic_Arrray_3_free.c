#include<stdio.h>

void printArray(int *arr, int n);
void isAllocated(int *arr);
// Calloc memory allocation

int main() {
	
	int i, n;
	int *arrm;
	printf("Enter the number of element in the array:\n");
	scanf("%d", &n);

	//malloc memory allocation
	arrm = (int *) malloc(n * sizeof(int));
	
	//calloc memory allocation
	int * arrc = (int *) calloc(n, sizeof(int));
	
	//checking if memory is allocated or not
	isAllocated(arrm);
	isAllocated(arrc);
	
	//printing the details
	printArray(arrm,n); //garbage values
	printArray(arrc, n); //0
	
	
	//deallocating or deleting the memory allocated to arrays
	
	free(arrc);
	free(arrm); // will free the memory
	
	arrc = (int*) calloc(2*n, sizeof(int));
	
	//printing the details
	printArray(arrm,n);
	printArray(arrc, n + n);
	
	
}

void isAllocated(int *arr) {
	if(arr == NULL)
		printf("Memory Not Allocated or Available\n");
	else
		printf("Memory Available or allocated\n");
}


void printArray(int *arr, int n) {
	int i = 0;
	printf("=====Printing Array=======\n");
	for(i = 0; i<n; i++) {
		printf("%d, ", arr[i]); 
	}
	printf("\n");
}

