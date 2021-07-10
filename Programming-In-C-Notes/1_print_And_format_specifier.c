#include<stdio.h>
#include<conio.h>

//format specifiers %d, %c, %f , %lf	
int main() {
	
	
	//the x variable is initialized here 
	int x = 10;  
	char ch = 'a'; 
	float f = 10.53;
	double d = 10.253;
	
	printf("My String "); //for printing normal statement
	
	printf("%d ",x); //for printing integer use %d
	printf("%c ",ch); //for printing integer use %c
	printf("%f ",f); //for printing integer use %f
	printf("%lf ",d); //for printing integer use %lf
	
	printf("\n"); // \n is used for printing new lines 


	printf("The value of x is %d\n", x);

	printf("%c is the value of variable ch\n",ch);
	
	//Questn: Print "The value of double variable d is 10.253 which is greater than 10, don't use constant values?"
	printf("The value of variable d is %lf which is greater than %d\n",d,x);
	
	//print the float variable with upto 3 decimal
	printf("The value of double variable d  is %.1f\n",f); // %.(n)f for printing float with n digit after decimal point
	
	//garbage collection
	
	printf("%d %d %d", 10,20,30,40); // output will be 10 20 30 , 40 will not be printed
	printf("\n");
	printf("%d %d", 10); // output will be 10 and garbage value7
	//printf("%d,%d,",10,20,); //Error due to extra comma after 20 , either it needs to be removed or give another value after ,
	printf("\n");
	printf("My salary is Rs %d",2,50,000); // output will be 2 because of extra comma
//	printf("My salary is Rs %d",); // error bc of comma
	printf("\nMy salary is Rs %d"); //garbage value
	getch();
}
