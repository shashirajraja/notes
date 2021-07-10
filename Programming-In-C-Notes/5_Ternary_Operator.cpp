#include<stdio.h>
#include<conio.h>
	//Ternary operator
int main() {
	int marks = 0;
	float passing_marks = 40, total_marks = 100;
	int pass = 0; 
	printf("Enter the marks obtained by student: ");
	scanf("%d", &marks); //marks = entered_value;


	//Ternary operator   a?b:c
	
	//its generally a single line of if else
	
	//a - condition
	//if condition is true then set value as b
	//else set value as c
		
	pass =  marks < passing_marks ? 0 : 1; //ternary operator //single line code
	  
	  
	/*if(marks < passing_marks) {
		pass = 0;
	}
	else {
		pass = 1;
	}*/
	
	
	
	if(pass) { //if block
		printf("\nYou are pass");
	} 
	//printf("The condtion was true"); //compilation error, as we can't insert any statement between if and else block	
	else { //else block
		printf("\nYou are fail");
	}
	


}
