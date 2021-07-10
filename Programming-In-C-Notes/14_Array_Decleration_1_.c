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
	
	int x[5]; //normal declaration followed
	
	printf("%d, %d, %d, %d, %d", x[0],x[1], x[2], x[3], x[4]);
	
	x[0] = 10;
	x[1] = 11;
	x[2] = 12;
	x[3] = 15;
	x[4] = 20;
	x[5] = 50;
	x[6] = 100;
	
}
