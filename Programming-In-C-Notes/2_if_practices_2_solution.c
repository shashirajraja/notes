//Q.2 -> Write a program to take an integer as input and print whether it is negative, positive or zero

#include<stdio.h>
#include<conio.h>
int main(){
    int integer;
    printf("Enter an integer\n");
    scanf("%d",&integer);
	
	if(integer==0){
		printf("integer is zero\n");
	}	
    else if(integer>0);{ 
    printf("integer is positive");
    }
    else{
    	printf("integer is negative");
	}	
    	
}
