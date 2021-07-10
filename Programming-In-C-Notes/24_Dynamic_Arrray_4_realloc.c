#include<stdio.h>

void printArray(int *arr, int n);
void isAllocated(int *arr);
void initialize(int *arr, int n);
// realloc memory allocation

int main() {
	
	int i, n, m;
	int *arrm;
	printf("Enter the number of element in the array:\n");
	scanf("%d", &m);
	scanf("%d", &n);
		
	//malloc memory allocation
	arrm = (int *) malloc( n * sizeof(int));
	
	//calloc memory allocation
	int * arrc = (int *) calloc(m, sizeof(int));
	
	//checking if memory is allocated or not
	isAllocated(arrm);
	isAllocated(arrc);
	
	//initializing the array
	initialize(arrm, m);
	initialize(arrc, m);
	
	//printing the details
	printArray(arrm, m); 
	printArray(arrc, m); 
	
	
	//reallocating the size of the arrm and arrc from m to n
	printf("===========After Realloating size from m to n=========\n");
	
	arrm = realloc(arrm, sizeof(int) * n);
	arrc = realloc(arrc, n * sizeof(int));
	
	printArray(arrm, n); // new memory will be added as garbage value
	printArray(arrc, n); //new memory will be added as garbage value
	
	
	printf("===========After Realloating size from n to m=========\n");
	//reallocating the size of the arrm and arrc from m to n
	
	arrm = realloc(arrm, sizeof(int) * m);
	arrc = realloc(arrc, m * sizeof(int));
	
	printArray(arrm, m);
	printArray(arrc, m);
	
	printf("===========After Dealloating the array=========\n");
	
	free(arrm);
	free(arrc);
	
	printArray(arrm, m);
	printArray(arrc, m); 
	
	
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

void initialize(int *arr, int n) {
	int i = 0;
	for(i = 0; i< n; i++)
		arr[i] = i+1;
}
