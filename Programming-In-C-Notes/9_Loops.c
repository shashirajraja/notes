#include<stdio.h>
#include<conio.h>

int main() {
	int i = 1;
	//to repeat a particular set of code, we uses a loop
	//There are two types of loop
	//1)for loop
	//2)while loop -> do-while, while
	
	/*
		for(initializer ; condition ; incrementor/decrementor/changes) {
		
			//the code that needs to be executed while above condition is true
			
		}
	
	*/
	
	//1st Example: WAP to print values from 1 to 100
	//for(i = 1; i<=100 ; i++) {
	//	printf("%d\n",i);
	//}	
	
	
	//print all even numbers between 100 to 1
	for(i = 100; i>=1 ; i = i -2) {
		printf("%d\n",i);
}
}


