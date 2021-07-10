#include<stdio.h>
void printArray(int[], int);
//Array element removal

int main() {
	
	int arr[] = {10,20,30,40,50,60,70,80,90,100};
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int p = 3; //position to delete the element
	
	//Q: remove the element at (p)th position
	
	//Ans: Final array should be like {10,20,40,50,60,70,80,90,100}
	
	for(int i=p-1; i<=n; i++) {
		
		arr[i] = arr[i+1];
		
	}
	
	//loop1: {10,20,40,40,50,60,70,80,90,100};
	//loop1: {10,20,40,50,50,60,70,80,90,100};
	//loop1: {10,20,40,50,60,60,70,80,90,100};
	//loop1: {10,20,40,50,60,70,70,80,90,100};
	//loop1: {10,20,40,50,60,70,80,80,90,100};
	//loop1: {10,20,40,50,60,70,80,90,90,100};
	//loop1: {10,20,40,50,60,70,80,90,100,100};
	
	//remove the last element
	arr[n-1] = '\0';
	
	//final: {10,20,40,50,60,70,80,90,100};
	
	printArray(arr, n);

	
}

void printArray(int arr[], int n) {
	int i = 0;
	
	for(i=0; i<n; i++)
		printf("%d, ",arr[i]);
	
}
