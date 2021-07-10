#include<stdio.h>
#include<conio.h>
//Recursion Function
int factorial(int);

int main() {
	
	int x = factorial(10);	
	
	printf("x = %d",x);
}

int factorial(int n) {

	if(n == 1 )
		return 1;

	return n * factorial(n-1);	//recursion of the function
}
