#include<stdio.h>
#define MAX 10

//Methods in string
int main() {
	/*
		Check if the string is substring of String: 
		
		char* strstr(char *, char *);
		
		char* ch = strstr(superString, subString);
		
		returns null if the substring is not found in the given superstring,
		else returns the string after first match
	*/
	

	
	char firstString[] = "Suman RajflsjfklRajsdfjdlk";
	
	char subString[] = "Raj";
	
	char* ret = strstr(firstString, subString);
	
	
	if(ret == NULL)	{
		printf("Not Matched\n");
	} else {
		printf("Matched\n");
		printf("%s", ret);
	}
	
}

