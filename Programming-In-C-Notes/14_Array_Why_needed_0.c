#include<stdio.h>
#include<conio.h>
//Why Array ?
//Let's try a question, WAP to take 5 numbers as input and print those enetered no at last

int main(){
	int x,y,z,t,u;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	scanf("%d",&t);
	scanf("%d",&u);
	
	printf("The entered value %d,%d,%d,%d,%d",x,y,z,t,u);
	
	
	/*As you can see in the above problem , we need to take multiple(5) variables for storing 5 
		values,as we are unable to store the multiple values in same variable. 
	
		What if the user have to enter 100 or more values instead of 5, we will have to use 
		100 variable now if we go on using above method. So here comes the introduction of Array.
		
		Definition::
		
		Array: An array is a collection of similar type of data in a single entity.
		
		like if we want to store multiple data of same datatype, then we can use array. So
		For above example, we can declare an array of integer of size 5 and solve the problem.
	
	
	*/
}
