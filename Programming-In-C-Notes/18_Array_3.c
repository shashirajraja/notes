#include<stdio.h>

//Array 

int main() {
	
	int arr[10];
	
	arr[0] = 20;
	arr[9] = 10;
	//rest will be set as garbage value;
	
	int n = 4;
	
	int array[n];
	
	for(int i=0; i<n; i++) {
		scanf("%d",&array[i]); //each element is scanned
	} //let input be 10,20,30,40
	
	//array = {10,20,30,40}

	//To find array size 
	//sizeof(--) function returns the size acquired by the given parameter
	int length = sizeof(array) /sizeof(array[0]);
	
	
	//To print all the element of the array	
	for(int i=0; i<length; i++)
		printf("%d",array[i]);
	
	//To change any particular position value
	
	//Eg: change the value of array at 2nd position
	array[1] = 100;
	
}
