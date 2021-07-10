#include<stdio.h>
void printArray(int[], int);
void scanArray(int[], int);
int sumOfArray(int[], int);
void printArrayUsingPointer(int*, int);

//Array passing as parameter

int main() {
	
	//1-D array
	int arr[] = {1, 2 , 3, 4 , 10 , 100};
	
	int sum = sumOfArray(arr,6);

	printf("Sum = %d\n",sum);	
	
	printArray(arr, 6); // array passing as parameters works as call by address
	
	//scanArray(arr, 6);
	
	printArray(arr, 6);
	
	printArrayUsingPointer(arr,6);
	printArrayUsingPointer(&arr[0], 6);


}

int sumOfArray(int x[] , int n) {
	int i,sum = 0;
	
	for(i=0; i<n; i++)
		sum = sum + x[i];
	
	return sum;
}


void printArray(int arr[], int size) {
	int i=0;
	printf("===========Printing Array===========\n");
	for(i = 0; i<size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void printArrayUsingPointer(int *ptr, int size) {
	int i=0;
	printf("===========Printing Array Using POinter===========\n");
	for(i = 0; i<size; i++)
		printf("%d ", *(ptr+i));
	printf("\n");
}


void scanArray(int arr[], int size) { // works as call by address
	int i = 0;
	
	printf("Enter %d Values: \n",size);
	
	for(i = 0; i< size; i++)
		scanf("%d",&arr[i]);	
		
}


