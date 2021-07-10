#include<stdio.h>
#include<conio.h>
//pointers
/*
Definition: THE POINTER IS  A TYPE OF VARIABLE WHICH STORES THE ADDRESS OF ANOTHER VARIABLE
*/
int main() {
	
	int x = 10; // variable decleration
	
	int *ptr1, **ptr2; //pointer variable decleration
	
	ptr1 = &x;  //
	
	ptr2 = &ptr1;
	

	printf("Value of x  (x)= %d\n",x);
	printf("Address of x (&x)= %d\n",&x);
	printf("Value of ptr , i.e address of x (ptr1) = %d\n",ptr1);
	printf("address of ptr1 (&ptr1) = %d\n",&ptr1);
	printf("value of the variable at the address stored in ptr1, i.e value of x, (*ptr1) = %d\n",*ptr1);
	printf("Value of ptr (ptr2), i.e address of ptr1 =, (ptr2) %d\n",ptr2);
	printf("value of variable whose location is stored at ptr2, i.e value of ptr1, i.e address of x, (*ptr2) = %d\n",*ptr2);
	printf("value of x, using pointer ptr2, (**ptr2) = %d\n",**ptr2);
	printf("============================================\n");
	
	
	//1: change the value of x to 20 with using ptr1
	
	*ptr1 = 20;
	
	printf("Value of x  (x)= %d\n",x);
	printf("Address of x (&x)= %d\n",&x);
	printf("Value of ptr , i.e address of x (ptr1) = %d\n",ptr1);
	printf("address of ptr1 (&ptr1) = %d\n",&ptr1);
	printf("value of the variable at the address stored in ptr1, i.e value of x, (*ptr1) = %d\n",*ptr1);
	printf("Value of ptr (ptr2), i.e address of ptr1 =, (ptr2) %d\n",ptr2);
	printf("value of variable whose location is stored at ptr2, i.e value of ptr1, i.e address of x, (*ptr2) = %d\n",*ptr2);
	printf("value of x, using pointer ptr2, (**ptr2) = %d\n",**ptr2);
	printf("============================================\n");
	
	
	//2: change the value of x to 40 using ptr2
	
	
	**ptr2 = 40; 
	
	printf("Value of x  (x)= %d\n",x);
	printf("Address of x (&x)= %d\n",&x);
	printf("Value of ptr , i.e address of x (ptr1) = %d\n",ptr1);
	printf("address of ptr1 (&ptr1) = %d\n",&ptr1);
	printf("value of the variable at the address stored in ptr1, i.e value of x, (*ptr1) = %d\n",*ptr1);
	printf("Value of ptr (ptr2), i.e address of ptr1 =, (ptr2) %d\n",ptr2);
	printf("value of variable whose location is stored at ptr2, i.e value of ptr1, i.e address of x, (*ptr2) = %d\n",*ptr2);
	printf("value of x, using pointer ptr2, (**ptr2) = %d\n",**ptr2);
	printf("============================================\n");
	
	//3: Make another pointer variable ptr3, which stores the address of ptr2,
		//and print the value of x using ptr3
		
	int ***ptr3;
	ptr3 = &ptr2;
	printf("x=%d",***ptr3);	
	
		
}
