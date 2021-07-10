#include<stdio.h>
#include<conio.h>

//Structures:-----

typedef int  myint;  
//typedef is used to give a new name for a data-type


myint main() {

	
	//Structure decleration	 Type 2
	/*
		struct <structure_name> {
			
			datatype variableName;
			.
			.
			
		} var1, var2, var3 = {initialized_values}, ....;
				
		typedef struct <structure_name> new_name;
		
		==============or=============================
		
		typedef	struct <structure_name> {
			
			datatype variableName;
			.
			.
			
		} new_name;
	*/
	
	
	struct employee {
		int empid;
		int pincode;
		int salary;
		char* name;
		
	};	
	
	typedef struct employee Employee;
	
	Employee emp2, emp3; //Variable declearation
	
	Employee emp1  = {1010, 824253, 5000, "Suman"}; //Decleration along with initialization
	
	//Accessing and Initiating the values of emp2
	emp2.empid = 15236;
	emp2.pincode = 253652;
	emp2.salary = 60000;
	emp2.name = "Suman Raj";
	
	printf("Printing the data of Emp1: \n");
	printf("Salary: %ld\n", emp1.salary);
	printf("Emp Id: %d\n", emp1.empid);
	printf("Pin Code: %d\n", emp1.pincode);
	printf("Name: %s\n", emp1.name);
	
	printf("\nPrinting the data of Emp2: \n");
	printf("Emp Id: %d\n", emp2.empid);
	printf("Pin Code: %d\n", emp2.pincode);
	printf("Salary: %d\n", emp2.salary);
	printf("Name: %s\n", emp2.name);
	
	
}
