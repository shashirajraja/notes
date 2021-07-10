#include<stdio.h>
#include<conio.h>

//Accessing Element in 2D Array and passing as parameter in function
void print2dArray(int[][3], int, int);
void scan2dArray(int[][3], int, int);

int main() {
		
	int arr[][3] = {1,2,3,4,5,6};
	
	/*
	To access nth row and mth column we need to use like
		
		arr[n-1][m-1];
	
	*/
		
	//Change the value of 2nd row and 3rd column to 100
	
	arr[1][2] = 100;

	print2dArray(arr, 2, 3);	// works as call by address 
	scan2dArray(arr, 2, 3); 	// works as call by address
	print2dArray(arr, 2, 3);
}

void print2dArray(int arr[][3], int row, int column) {
	int i = 0, j = 0;
	printf("========Printint array=========\n");
	for(i = 0; i< row ; i++) {
		for(j = 0; j < column; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}




void scan2dArray(int arr[][3], int row, int column) {
	int i = 0, j = 0;
	printf("========Scanning array=========\n");
	for(i = 0; i< row ; i++) {
		printf("Enter %d element for row %d \n",column, i+1);
		for(j = 0; j < column; j++) {
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
}
