#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void bubbleSort(int*, int);
void scanArray(int*, int);
void printArray(int*, int);

int main(){
	
	int n;
	
	printf("Enter the no.of elements of the array: \n");
	
	scanf("%d",&n);
	
	int arr[n];
	
	scanArray(arr,n);
	
	printArray(arr,n);
	
	bubbleSort(arr, n);
	
	printArray(arr,n);

	
	
}


void bubbleSort(int *arr, int n) {
	int i = 0, j = 1,k=0, mymin,mypos=-1;
	
	//Traversing the array
	for(i=0;i<n-j;i++){
		
		for(k=0;k<n-i-1;k++){
			
			//comparing the two consecutive element and exchanging the values such that smaller comes first
			if(arr[k]>arr[k+1]){
				int t=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=t;
			}
		}
		
		//j++;
		
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
