#include<stdio.h>
#define MAX 10

//Methods in string
int main() {
	/*
		Copy String: copying string from one to another
		
		char* strcpy(char *, char *);
		
		strcpy(firstString, secondString);
		
		firstString will contains the copy of the secondString
	*/
	
	
	
	char firstName[] = "Suman";
	
	char lastName[] = "Raj";
	
	strcpy(firstName, lastName); 
	
	
	printf("First: %s\n", firstName); // Raj
	printf("Last: %s\n", lastName); //Raj

}

