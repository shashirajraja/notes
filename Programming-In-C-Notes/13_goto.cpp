#include<stdio.h>
#include<conio.h>
//Goto 
//unstructural programming concept

int main(){
	printf("My Name is ");
	
	goto something; //goto label-name; //will execute the code after the given label only
	
	printf("Suman Raj ");
	
	name: //known as label
	
	printf("Shashi Raj ");
	
	something:
	
	printf("Something ");
	
}
