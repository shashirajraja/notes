#include<stdio.h>
#include<conio.h>
//pointers
/*
Definition: THE POINTER IS  A TYPE OF VARIABLE WHICH STORES THE ADDRESS OF ANOTHER VARIABLE
*/
int main() {
	
	int x = 10; // variable decleration
	
	//printf("value = %d\n",x);  //printing the actual value of the variable x
	//printf("address = %d\n",&x); //printing the address of the location of variable x
	
	/*pointer decleration:
		dataType *variableName;
	*/
	int *ptr ;
	
	ptr = &x;  //pointer is storing the address of variable x
	
	printf("Value of x  (x)= %d\n",x);
	printf("Address of x (&x)= %d\n",&x);
	printf("Value of ptr (ptr), i.e address of x = %d\n",ptr);
	printf("value of the variable at the address stored in ptr = %d\n",*ptr);
	printf("============================================\n");
	
	//modification
	//1: Updating the value of x to 20;
	
	//x = 20; //normal method
	
	*ptr = 20; // will change the value of the variable which is at address stored by pointer
	
	printf("Value of x  (x)= %d\n",x);
	printf("Address of x (&x)= %d\n",&x);
	printf("Value of ptr (ptr), i.e address of x = %d\n",ptr);
	printf("value of the variable at the address stored in ptr = %d\n",*ptr);
	printf("============================================\n");
	
	//Here we changed the value of x by using the ptr,
	// i.e *ptr gives the value at the given pointer location
}
