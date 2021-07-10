#include<stdio.h>
#include<conio.h>
//pointers arithmetic operations

int main() {
	
    int x =10, y =20, sum = 0;

	int *ptr1 = &x; //initialization along with decleration of a pointer

    int *ptr2 = &y, *ptr3 = &sum;
	
    *ptr3 = *ptr1 + *ptr2; //arithmetic operation using pointer
    
    printf("The sum of %d and %d is %d\n",x,y,sum);
    printf("===================================");
    
    int z;
    
    z = *ptr1 + *ptr2; // valid
    
	z = ptr2 - ptr1; //valid
    
	ptr3 = ptr1 + 1; //valid
	
	ptr1++; // ptr1 = ptr1 + 1; //valid
	
	ptr2--; //valid
	
	++ptr1; //valid
	
	--ptr2; //valid
	
	//z = ptr1 + ptr2; //invalid /*  add/mul/div/mod of two or more pointers is not allowed  */
	
	//ptr3 = ptr1 + ptr2;	 //invalid --
	
	//z = ptr1 * ptr2; //invalid
	
	//z = ptr1 / ptr2; //invalid
	
	//z = ptr1 % ptr2; //invalid
	
	//z = ptr1 + 1; //invalid
}
