#include<stdio.h>
#include<conio.h>
//Function examples

//function declerations
void message(); // no return type without parameter
void print_integer_value(int /*called as parameter*/); // no return type with one parameter

//function definitions
void message(){
	printf("Hello\n");
}

//function with return type and with parameter
//return-type : int
//parameter : char ch
int ascii(char ch){ 
	
	int x = ch; //logic for getting the ascii value of a character
	
	return x; //returned ascii value
}

int sum(int x, int y, int z) {
	printf("x= %d, y= %d, z= %d\n",x,y,z);
	return x+y+z;
	
	
}

int main() {
	int j;
	//message(); //calling function without passing any value
	
	//scanf("%d",&j);
	//print_integer_value(j);	 //passing the values while function call	
	
//	char ch = 'a';
//	int x = ascii(ch); //returned value from function is stored in x variable
//	printf("%d", x);

	int a = 0;
	int s = sum(a, a++, a++); //method call is processed from right to left 
	printf("sum = %d",s);
	
//	printf("%d",sum(1,2,3));


}


void print_integer_value(int k){
	printf("k=%d",k);	

	message(); //calling functin inside another function //it will return here afeter completing the function executions
	
	printf("\ndone");
	
}

