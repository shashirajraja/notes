#include<stdio.h>
#define MAX 10

//Methods in string
int main() {
	/*
		Compare String: 
		
		int strcmp(char *, char *);
		
		int returned_value = strcmp(firstString, secondString);
		
		if returned value is positive : then 1st one is bigger, if negative then 2nd one is bigger, else both are same
	*/
	

	
	char firstString[] = "Suman";
	
	char lastString[] = "Suman";
	
	int retVal = strcmp(firstString, lastString); 
	printf("Returned Value = %d\n",retVal);

	if(retVal > 0) {
		printf("1st is larger");
	} else if(retVal < 0) {
		printf("2nd is larger");
	} else {
		printf("Both are equal");
	}

	


	
}

