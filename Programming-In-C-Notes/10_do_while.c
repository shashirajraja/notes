#include<stdio.h>
#include<conio.h>

int main() {
	int fact,i,n;
	fact=1;
	printf("Enter the number");
	scanf("%d",&n); //5
	
	//STEP 1: Initialize the value of variable
	i = 1;
	
	//STEP 2: Use while loop and give condition
	
	do {
		//STEP 3: write codes
		fact = fact * i;
			
		//STEP 4: Increment/Decrement the value of i
		i++;	
	} while(i <= n) ;
	
	printf("\n%d! = %d",n,fact);
	
	
	getch();
}


