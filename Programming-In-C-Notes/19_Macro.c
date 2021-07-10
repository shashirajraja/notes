#include<stdio.h>
#include<conio.h>

//Pre-Processors
#define MAX 100 //MACRO
#define max(a, b) a>b?a:b //inline function 
#define sum(a,b) a+b 
#define mul(a,b) (a)*(b) // if parenthesis is missed, we will get wrong answer

#define sqr(a) (a)*(a)
#define cube(a) (sqr(a)) * (a)
#define test m##a##i##n //concatenation is used in macro like this using ##
/*
Note: Macro is not used in complicated case

*/

int maxx(int,int);

int main(){  //test will be replaced by main from macro defined above
	
	int n = 10;	//variable
	
	printf("MAX = %d\n",MAX);
	
	printf("max = %d\n", max(90,20));

	printf("Maxx = %d\n", maxx(90+10,20));
	
	printf("Sum = %d\n", sum(10,20));
	
	printf("Mul = %d\n", mul(10,20));
	
	printf("Mul = %d\n", mul((10+20),20));
	
	printf("Cube = %d\n", cube(10));

}

//slow
int maxx(int a, int b) { 
	return a>b?a:b;

}

