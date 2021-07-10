#include<stdio.h>
#include<conio.h>
//linear search
//Search an element in the given array
//Best Time Complexity: o(1)
//Worst Time Complexity: o(n)

int linearSearch(int*, int, int);


int main(){
	
	int arr[] = {1,2,3,4,5,6,7,8,9,10};

	int n = 10;
	
	int itemToSearch = 30;
		
	int location = linearSearch(arr,n,itemToSearch);

	if(location!=-1) {
		printf("%d is present at location: %d\n",itemToSearch, location);
	} else {
		printf("%d is not present in the array\n",itemToSearch);
	}
}

int linearSearch(int* arr, int n, int item) {
	int i;
	
	for(i=0; i<n ;i++) {
		if(arr[i] == item) 
			return i+1;
	}
	
	return -1;
}

