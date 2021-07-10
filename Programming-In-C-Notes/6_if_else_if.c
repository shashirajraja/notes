#include<stdio.h>
#include<conio.h>
//Else if condition

int main() {
	int marks = 48;

	if(marks < 40) {
		//fail
		printf("Fail\n");
	}
	else if(marks < 60) {
		//pass and 
		//good
		printf("\nPass and Good Performance\n");
	}
	else{
		printf("\n Pass and Excellent Performance");
	}


}
