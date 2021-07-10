#include<stdio.h>
#define MAX 10

//Methods in string
int main() {
	/*
		Concatenation: Connecting two strings together one after other
		eg:
		firstName = Suman
		lastName = Raj
		fullName = firstName + lastName  (concatenation)
		fullName = Suman Raj
	
		//We have an inbuild functions for concatenating two strings in c
		//Signature:
		
		char* strcat(char *, char *);
		
		strcat(firstString, secondString);
		
		firstString will contains the concatenated string output
	*/
	

	
	char firstName[] = "Suman";
	
	char lastName[] = "Raj";
	
	strcat(firstName, lastName); //concatenate the lastName to firstName and changes the firstName to the reqd value
	

	printf("First: %s\n", firstName); // SumanRaj
	printf("Last: %s\n", lastName); //Raj
	printf("FullName: %s\n", firstName);  //SumanRaj 
	


	
}

