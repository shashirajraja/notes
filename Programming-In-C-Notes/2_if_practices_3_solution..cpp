//Q.3 -> Take two input numbers and print the maximum and minimum among them

#include<stdio.h>
#include<conio.h>

int main(){
	float a,b;
	scanf("%f%f",&a,&b);
	if(a==b){
		printf("Both are equal");
	}
	else if(a>b){
		printf("The maximum value is %f",a);
		printf("/nThe minimum value is %f",b);
	}
	else{
		printf("The maximum value is %f",b);
		printf("/nThe minimum value is %f",a);
	}
	
	
}
