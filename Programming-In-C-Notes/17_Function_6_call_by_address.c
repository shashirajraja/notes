#include<stdio.h>
#include<conio.h>
//function- Call by value

void swap(int,int);
	
void swap(int a,int b){	
	printf("====Inside function========\nSwapping numbers with value a = %d and b = %d\n",a,b);
	
	int x=a;
	a=b;
	b=x;
	
	printf("Swapped Output: a=%d, b=%d\n",a,b);

}
int main() {
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b); // input values of a and b
	
	swap(a,b); //calling the function by value 
	
	printf("=========Inside main function: a=%d, b=%d\n",a,b); //value is not changed here
}
