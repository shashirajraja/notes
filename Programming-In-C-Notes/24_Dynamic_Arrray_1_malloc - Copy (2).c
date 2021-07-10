#include<stdio.h>

void printArray(int *, int );
//Dynamic Array in C

int main() {
	/*
		Dynamic memory allocation:
		Allocating the memory of an array at runtime 
	*/
	
	
	int *arr;
	
	int i, n;
	printf("Enter the number of element in the array:\n");
	scanf("%d", &n);


	//malloc memory allocation
	/*
	
		datatype* arrName = (datatype *) malloc(sizeofArray * sizeof(dataType));
		
		
		Malloc will initiate the array elements with garbage value
	
	*/
	arr = (int *) malloc(n * sizeof(int));
	
	//printing the details
	printArray(arr,n);
	
	
}

void printArray(int *arr, int n) {
	int i = 0;
	printf("=====Printing Array=======\n");
	for(i = 0; i<n; i++) {
		printf("%d, ", arr[i]); 
	}
	printf("\n");
}

