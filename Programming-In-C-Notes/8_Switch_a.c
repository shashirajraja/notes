#include<stdio.h>
#include<conio.h>
//Switch-Case

int main() {
	int marks = 50;

//	if(marks == 10) {
//		printf("A\n");
//	}
//	if(marks == 20) {
//		printf("B\n"); 
//	}
	//switch(expression)
	switch(marks) { //the switch can't be applied with float and double datatypes
		
		case 10:   //it is equal to case 1:, the case value can only be constant but not variable
			printf("\nI am in case 1");
			printf("\nGrade: A");
			 //break is used to stop the program from executing the other cases
		case 20:
			printf("\nI am in case 20");
			printf("\nGrade: B");
			break;
		case 30:
			printf("\nI am in case 30");
			printf("\nGrade: C");
			break;
		case 40:
			printf("\nI am in case 40");
			printf("\nGrade: D");
			break;
		default: //default is executed only if all the above cases conditions fails
			printf("\nI am in case default with value : %d", marks);
			printf("\nGrade: Z");
	}

	
}


