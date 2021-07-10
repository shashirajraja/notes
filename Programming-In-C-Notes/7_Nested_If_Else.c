#include<stdio.h>
#include<conio.h>
//Nested If else

int main() {
	int marks = 40;

	if(marks < 40) {
		//fail
		printf("Fail\n");
	}
	else {
		//pass
		//if(marks >= 40)  //{
		//	printf("\pass\n"); 
		//} //{} bracket is optional when there is only one statement required within if or else block

		//nested if else
		
		if(marks >= 40) {
			printf("\nPass\n");
		}
		
		if(marks >= 40 && marks < 60) {
			printf("Good Performance");
		}
		else if(marks < 80) {
			printf("Better Performance");
		}
		else {
			printf("Best Performance");
		
			if(marks >=90) {
				printf("\nWow\n");
			}
		}
	
	}

}


