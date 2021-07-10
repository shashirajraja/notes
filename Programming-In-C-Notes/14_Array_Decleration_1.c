#include<stdio.h>
#include<conio.h>
//Array Decleration

int main(){

	/*
		DataType variable_name[size]; //decleration
			int x[5]; //examples
			char ch[100]; //size is compulsory to be given while decleration
			float y[50];
	*/
	
	//int x[ ]; //ERROR //Size should not be empty
	
	//int x[-1]; //ERROR //Size can't be negative
	
	//int x[0];//valid 
	
	int y[5]; //declaration of int array of size 5 // the value initialized here will be garbage value
	
//	/* Declaration  + initialization */
	int z[5] = {1,2,3,4,5}; // the array will be initialized with given values
	
	int a[5] = {1,2,3}; // first 3 value will be 1 , 2 and 3 and rest two will be zero
	
	//int b[1] = {1,2,3}; //Warning // the size of array must be greater and equal to the number of elements given
	
	int c[2+3]; // int c[5];
	int d[5<2]; // int d[0];
	int e[2<5]; // int e[1];
	
	
	int x[5];
	printf("Before Initialization: %d, %d, %d, %d, %d\n", x[0],x[1], x[2], x[3], x[4]);
	
	//Initializing the values for x array
	x[0] = 10;
	x[1] = 11;
	x[2] = 12;
	x[3] = 15;
	x[4] = 20;
	 
	printf("After Initialization: %d, %d, %d, %d, %d", x[0],x[1], x[2], x[3], x[4]);
}
