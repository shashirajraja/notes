#include<stdio.h>
void printArray(int[], int);
//Array with pointers

int main() {
	
	int arr[] = {10,20,30,40,50,60,70,80,90,100};
	
	int i = 0, n = 10;
	
	int *ptr;
	
	printf("Address of Array: %d (i.e address of 1st element of the array)\n",arr);
	
	ptr = arr;
	
	printf("Address stored at Pointer: %d, (i.e address of array's 1st element')\n",ptr);
	
	
	//print the first element 
	printf("1st Element Using arr: %d\n",arr[0]);
	printf("1st Element Using arr as pointer: %d\n",*arr);
	printf("1st Element Using Pointer: %d\n",*ptr);
	
	//print the second element
	printf("2nd Element Using arr: %d\n",arr[1]);
	printf("2nd Element Using arr as pointer: %d\n",*(arr+1));
	printf("2nd Element Using Pointer: %d\n",*(ptr+1));
	
	//print the nth element
	printf("nth Element Using arr: %d\n",arr[n-1]);
	printf("nth Element Using Pointer: %d\n",*(ptr+n-1));
	
	//print all elements using pointer
	for(i=0; i<n; i++) {
		printf("%d, ",*(ptr+i));
	}
	printf("\n");
	
	//changing the value at mth location using pointer
	int m = 3;
	int value = 1000;
	*(ptr + m - 1) = value;

	for(i=0; i<n; i++) {
		printf("%d, ",*(ptr+i));
	}
	printf("\n");
	
	printf("%d",*(arr+1)); //2nd location can be accessed like this too
}
