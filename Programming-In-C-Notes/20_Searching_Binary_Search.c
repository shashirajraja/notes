#include<stdio.h>
#include<conio.h>
//Binary search
//Search an element in the given sorted array
//Binary Search only works in sorted array

int binarySearch(int*, int, int);


int main(){
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};

	int n = 10;
	
	int itemToSearch = 10;
		
	int location = binarySearch(arr,n,itemToSearch);

	if(location!=-1) {
		printf("%d is present at location: %d\n",itemToSearch, location);
	} else {
		printf("%d is not present in the array\n",itemToSearch);
	}
}

int binarySearch(int* arr, int n, int item) {
	
	int lb,ub,mid,i;
	
	lb = 0;
	ub = n-1;
	
	while(lb <= ub) {
		mid = lb  + (ub-lb) / 2;
		
		if(item < arr[mid]  ) {
			ub = mid -1;
		} 
		else if(arr[mid] < item) {
			lb = mid + 1;
		}
		else{
			return mid + 1;
		}
		//printf("Checking at Mid = %d, lb = %d, ub = %d\n", mid+1, lb+1, ub+1);
	}
	
	return -1;
}

