#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void mergeSort(int*, int, int);
void merge(int*, int, int, int);
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
	printArray(arr,n);
	
	mergeSort(arr, 0, n-1);
	
	printArray(arr,n);

	
	
}


void mergeSort(int *arr, int lb, int ub) {
	//exit condition
	if(ub <= lb)
		return;		
		
	//find the mid location
	int mid = lb + (ub - lb)/2;
	
	//divide the array into two parts and call the mergesort for both
	//calling the mergesort for first half
	mergeSort(arr, lb, mid);
	
	//calling the mergesort for second half
	mergeSort(arr, mid+1,ub);
	
	merge(arr, lb, mid , ub);
		
}


void merge(int* arr, int lb, int mid ,int ub){
	//Populating the values first array
	int i, j=0, k=0;
	int n1 = mid-lb+1;
	int n2 = ub - mid;
	int arr1[n1];
	int arr2[n2];
	
	
	for(i=lb;i<=mid;i++){
		arr1[j]= arr[i];
		j++;
	
	}
	printArray(arr1,n1);
	//Populating the values in second array
	j = 0;
	for(i=mid+1;i<=ub;i++){
		arr2[j]= arr[i];
		j++;
	
	}
	printArray(arr2,n2);
	//logic
	i = 0; j = 0;
	for(k = lb; k <= ub ; ) {
		
		//If both the array are unvisited
		if(i < n1  && j < n2 ) {
			
			//if the front unvisited element in 1st arr1 is less then put it into final array
			if(arr1[i] <= arr2[j]) { 
				arr[k] = arr1[i];
				i++; //marking the ith location of arr1 as visited
				k++; //marking the kth location of arr3 as visited
				
			
			} 
			
			else{
				arr[k] = arr2[j];
				j++;
				k++;
			
			}
			
		} 
		else if(i < n1) { //when arr2 is completely visited but the elements are left in arr1 to be visited
			arr[k] = arr1[i];
			i++;
			k++;
			

		} 
		else if(j < n2){ //when arr1 is completely visited but the elements are left in arr2 to be visited
			arr[k] = arr2[j];
			j++;
			k++;
			

		}
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
