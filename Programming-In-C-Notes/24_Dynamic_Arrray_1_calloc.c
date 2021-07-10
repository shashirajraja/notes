#include<stdio.h>

void printArray(int *arr, int n);
// Calloc memory allocation

int main() {
	
	int *arr;
	
	int i, n;
	printf("Enter the number of element in the array:\n");
	scanf("%d", &n);


	//Calloc memory allocation
	/*
	
		datatype* arrName = (datatype *) calloc(sizeofArray , sizeof(dataType));
		
		
		Calloc will initiate the array elements with default value
	
	*/
	arr = (int *) calloc(n , sizeof(int));
	
	//char array
	float * arr1 = (float *) calloc(n, sizeof(float));
	
	//printing the details
	printArray(arr,n);
	
	printArray(arr1, n);
}	
	
void printArray(int *arr, int n) {
	int i = 0;
	printf("=====Printing Array=======\n");
	for(i = 0; i<n; i++) {
		printf("%d, ", arr[i]); 
	}
	printf("\n");
}

