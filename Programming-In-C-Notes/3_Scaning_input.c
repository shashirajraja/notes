#include<stdio.h>
#include<conio.h>
	
int main() {
	
	
	//The x variable is initialized here 
	int x;  
	char mychar;
	double mydouble;
	float myfloat;
	
	printf("Enter a number: ");
	
	//for taking an input we use scanf("format specifier", &variable_name) function
	scanf("%d",&x); //for scanning the input from user
	// where & is called as ampersand
	// %d is format specifier
	// x is the variable name
	
	//if user enter the value as 100
	// x = 100;
	
	printf("\nYou have entered: %d\n",x);
	
	
	printf("Enter a double : ");
	scanf("%lf",&mydouble); //mydouble = entered_value;
	printf("\nYou have entered: %lf\n",mydouble);
		
	printf("Enter a float : ");
	scanf("%f",&myfloat); //mydouble = entered_value;
	printf("\nYou have entered: %f\n",myfloat);
	
		
	printf("Enter a character: ");
	scanf("%c",&mychar); // mychar = input_value;
	printf("\nYou have entered: %c\n",mychar);
	
	getch();
}
