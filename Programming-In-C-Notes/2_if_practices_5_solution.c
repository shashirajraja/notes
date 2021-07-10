//Q.5 -> Write a program to take a,b,c as input of quadratic equation ax^2+bx+c=0 and detect if solution exists or not.
		//If solution exists, print the solutions of the number

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	
	float a,b,c;
	float d;
	float x,y;
	printf("Enter three numbers");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0){
		printf("Having two roots");
		if(d==0){
			printf("both roots are equal");
		}
		x=(-b+sqrt(d))/(2*a); 
		y=(-b-sqrt(d))/(2*a);
		printf("The roots are %f and %f",x,y);
		
		
		
	}
	else{
		printf("Having no roots");
	    }
	
	
	
}
