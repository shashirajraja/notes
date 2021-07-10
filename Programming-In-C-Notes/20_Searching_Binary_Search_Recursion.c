#include<stdio.h>
#include<conio.h>
//Binary search
//Search an element in the given sorted array
//Binary Search only works in sorted array

int binarySearchRecursion(int*, int, int,int, int);


int main(){
	
	int arr[] = {1,2,3,0,5,6,7,8,9,10};

	int n = 10;
	
	int itemToSearch = 0;
		
	int location = binarySearchRecursion(arr,n,itemToSearch,0,n-1);

	if(location!=-1) {
		printf("%d is present at location: %d\n",itemToSearch, location+1);
	} else {
		printf("%d is not present in the array\n",itemToSearch);
	}
}

int binarySearchRecursion(int* arr, int n, int item, int lb, int ub) {
	
	int mid = lb  + (ub-lb) / 2;
	
	//printf("Checking at Mid = %d, lb = %d, ub = %d\n", mid+1, lb+1, ub+1);
		
	if(lb > ub)
		return -1;
	
	if(arr[mid] == item)
		return mid;
	
	else if(arr[mid] < item) 
		return binarySearchRecursion(arr,n,item,mid+1, ub);
		
	else if(item < arr[mid])
		return binarySearchRecursion(arr,n,item,lb, mid-1);
	
	
	return -1;
}

