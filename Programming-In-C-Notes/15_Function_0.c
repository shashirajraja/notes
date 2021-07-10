#include<stdio.h>
#include<conio.h>
//Function  declaration and definition
/*
	3 Stages
	1) Function Decleration
	2) function Defination]
	3) Function Call

*/

/*
	1) Function Decleration: 
		a) Non- Parameterised Function (Without Arguments/input-values)
		b) Parameterised Function (With Arguments/input values)
		
	a) Non-Parametrised Function DEcleration Structure:
		
			return_data_type function_name();
			
		Eg:  void sayHello();
			 int add();
			 
	void => if the function is not returning anything, we use return type as void
	
	b) Parameterised function decleration structure:
		
		return_data_type function_name(datatype1, datatype2,....);
	eg: 
		int sum(int, int);	
		void diff(int a, int b);
		
		Note: Variable name in argument is optional while declearing the parameterised function
		
		Note: Function decleration is optional when function definition is defined before main function
	*/
void sayHello(); //function-decleration


/*
	2) Function Definition:
	
		return_type function_name() {
			//body of the function
			
			
		}
*/
void sayHello(){ //function-definition
	printf("Hello\n");
	
}

int main(){


	/*
		3) Function Call:
		
			function_Name();
	
	*/
	sayHello(); //function-call //calling 1st time
	
	printf("I am going to call the function again\n");
	
	sayHello(); //calling 2nd time

}






