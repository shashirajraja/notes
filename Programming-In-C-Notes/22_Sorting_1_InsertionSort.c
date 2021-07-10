#include<stdio.h>
#include<conio.h>

void scanarray(int* , int);
void printarray(int* , int);
void insertionarray(int* , int);


int main(){
	int n;
	printf("Enter the number of elements: \n");
	
	scanf("%d",&n);
	int arr[n];
	
	scanarray(arr,n);
	printarray(arr,n);
	insertionsort(arr,n);
	printarray(arr,n);
	
}
void scanarray(int* arr, int n){
	int i;
	printf("Enter the array element: \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
}

void printarray(int* arr, int n){
	int i;
	printf("The array is: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
		
	}
	printf("\n");
}

void insertionsort(int* arr ,int n){
	int i,j,key;
	for(i=1;i<n;i++){
		key = arr[i];
		for(j = i-1; j>=0; j--) {
			if(arr[j] > key) 
				arr[j+1] = arr[j];
			else
				break;
		}
		arr[j+1] = key;
	}
	
	
	
}








