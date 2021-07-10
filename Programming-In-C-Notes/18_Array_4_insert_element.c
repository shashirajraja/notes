#include<stdio.h>
void printArray(int[], int);
//Array element Insertion

int main() {
	
	int arr[] = {10,20,30,40,50,60,70,80,90,100};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int p = 3; //position at which we have to insert an element
	
	int value = 1000;
	//Q: Insert the element at (p)th position
	
	//Ans: Final array should be like {10,20,1000,30,40,50,60,70,80,90,100}
	
	for(int i=n-1; i>=p-1; i--) {
	
		arr[i+1] = arr[i];
	
	}
	
	arr[p-1] = 1000; //put the value to be inserted
	
	n = n + 1;
	
	printArray(arr, n);
	
	
}
	
void printArray(int arr[], int n) {
	int i = 0;
	for(i=0; i<n; i++)
		printf("%d, ",arr[i]);
	
}
