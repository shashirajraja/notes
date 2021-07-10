#include<stdio.h>
#include<conio.h>

int main() {
	int marks = 0;
	float passing_marks = 40, total_marks = 100;
	
	printf("Enter the marks obtained by student: ");
	scanf("%d", &marks); //marks = entered_value;

	//condition checking 
	//1st condition - If marks >= 40 then pass
	
	//if(conditional statement i.e comparisional or logical) {   codes..... }
	
	if(marks >= passing_marks) {  // if entered_marks >= passing_marks then proceed
		//do whatever you want as per condition
	    printf("\nYou Have passed with %f percentage: \n", (marks/total_marks) * 100);
	}
	else { //if the above condition is false, then only else is executed
		printf("\nYou are fail!\n");
		printf("You have scored only %f percentage: \n", (marks/total_marks) * 100);
	}
	
}

