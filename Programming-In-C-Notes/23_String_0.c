#include<stdio.h>
#define MAX 10


int main() {
	
	//Taking an input for a sentence
	/*
		gets(string_var_for__storing_scanned_value);  //scanning string as a sentense
		puts(string_var_to_print); //printing sentense or string
		
		The above two functions(puts and gets) are decleared in <stdio.h> library
	
		//The function signature for gets and puts are like :
			
			char* gets(char* str);
			
			int puts(char* str); 
			
	
	*/
	//To store
	char str[MAX]; //declaration
	
	printf("Enter the sentence:\n");
	
	/*METHOD : 1*/
	//Scan
	//gets(str);
	
	//print
	//puts(str);
	
	/*METHOD : 2*/
	
	//scanf("%s",str); //WRONG //Only to take one word as input //will not take sentense as input
	
	scanf("%[^\n]s", str); //Will take whole sentense as input
	printf("You have entered: %s", str);	
	
		
}

