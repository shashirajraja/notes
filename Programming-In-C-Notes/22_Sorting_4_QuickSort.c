#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void quickSort(int*, int, int);
int partition(int*, int, int);
void swap(int *, int*);
void scanArray(int*, int);
void printArray(int*, int);
int m;
int main(){
	
	int n;
	printf("Enter the no.of elements of the array: \n");
	scanf("%d",&n);
	m = n;
	int arr[n];
	scanArray(arr,n);
	printf("=========Before Sorting=========\n");
	printArray(arr,n);
	
	quickSort(arr, 0, n-1);
	
	printf("=============After Sorting===========\n");
	printArray(arr,n);

	
	
}


void quickSort(int *arr, int lb, int ub) {
	//exit condition
	if(ub <= lb)
		return;
		
	//partition the array and get the pivot point at correct position
	int pi = partition(arr,lb, ub);
	
	//calling the quickSort for element left of pivot point
	quickSort(arr, lb, pi-1);
	
	//calling the auicksort for elements after pivot point
	quickSort(arr, pi+1,ub);
			
}


int partition(int* arr, int lb, int ub){
	
	int pivot = arr[ub]; // let the last element be the pivot position 
	
	int i = lb - 1; 
	int j ;
	
	
	for(j = lb ; j < ub; j++) {
		
		if(arr[j] < pivot){
			i++; // increase the ith position
			swap(&arr[i], &arr[j]); //swap the elements at ith and jth location
		} 
		
		//else : do nothing
	}

	i++; //again increase i with one
	
	swap(&arr[i], &arr[j]); //again swap the ith and jth position element
	
	return i;	
}
void swap(int *a, int* b){
	int t;
	t= *a;
	*a= *b;
	*b=t;
	
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
