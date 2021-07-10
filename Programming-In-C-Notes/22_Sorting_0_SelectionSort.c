#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void selectionSort(int*, int);
void scanArray(int*, int);
void printArray(int*, int);

int main(){
	
	int n;
	printf("Enter the no.of elements of the array: \n");
	scanf("%d",&n);
	int arr[n];
	scanArray(arr,n);
	printArray(arr,n);
	
	selectionSort(arr, n);
	
	printArray(arr,n);

	
	
}


void selectionSort(int* arr, int n) {
	int i = 0, j = 0,k=0, mymin,mypos=-1;
	
	//Traversing the array from 1st to last position
	for(i=j;i<n;i++){
		mymin = arr[i];
		mypos = i;
		
		//Searching the minimum array item in the left array part
		for(k=i;k<n;k++){
			if(arr[k]<mymin){
				mymin=arr[k];
				mypos=k;
			}
		}
		
		//Exchanging the minimum element position with the current position of i
		int t=arr[i];
		arr[i]=arr[mypos];
		arr[mypos]=t;
		
		j++;
		
	}
}

void printArray(int *arr, int n) {
	printf("The array is: \n");
	int i ;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void scanArray(int *arr, int n) {
	int i;
	printf("Enter the elements of the array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
