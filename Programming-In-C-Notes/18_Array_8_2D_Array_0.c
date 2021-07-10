#include<stdio.h>

// 2D Array

int main() {

	
	/*A: Declaration:
	
		DataType varName[rowSize][columnSize];
		
		int arr[10][20];
		
		//All the element will be filled with garbage value here
		
		rowSize and columnSize to be mentioned is compulsory, when decleration is done in above format
	
	*/
	
	/*
		int arr[][]; //Error - size is compulsory
	
		int arr[10][]; //Error : both Size is compulsory
	
		int arr[][10]; //Error: both size is compulsory
	
		int arr[10][20]; //Valid
	*/
	
	int arr[4][3]; //Array is decleared with 4 row and 3 columns
	
	printf("%d", arr[1][2]); //Accessing the 2nd row and 3rd column element of the 2d-array
	
	//By default the intial values of the above array will be garbage 
	
	/*B: Declearation as well as Initialization
	
		Datatype varName[rowSize][columnSize] = {{r1c1, r1c2, r1c3,...}, 
												{r2c1, r2c2, r2c3,...},
												{r3c1, r3c2, r3c3,...},... };
												
		Here rowSize mentioning is compulsory but columnSize is compulsory 
		[i.e column size must be present].
												
	*/
	/*
	
		int x[][] = {{1,2},{2,3}}; //Column is compulsory
		int x[5][] = {{1,2},{2,3}}; //Column is compulsory to be defined
		int x[][6] = {{1,2},{2,3}}; //Valid // Column is compulsory
			
		int x[1][2] = {{1,2},{2,3},{3,4}}; //valid //Warning
	
	*/
	
	int x[][2] = {{1,2},{2,3}}; //Valid
	
	/*C: Declearation + initialization
	
		datatype varName[rowSize][colSize] = {val1, val2, val3, val4, .....};
		
		here it will automatically take the values and divide it into reqd row and column
		
	*/
	
	int y[][3] = {1,2,3,4,5,6,10,10,20,20}; // Valid 
	
	int z[2][3] = {1,2,3,4,5,6}; // valid
	
	/*
		int z[2][3] = {1,2,3,4,5,6};
		
		equivalent to: 
		
		
		int z[2][3] = {{1,2,3},{4,5,6}}; 
	*/
}
