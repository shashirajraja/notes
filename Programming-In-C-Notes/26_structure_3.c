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
	
	*/
	
	
	typedef struct employee {
		int empid;
		int pincode;
		int salary;
		char* name;
		
	}Employee;	
	
	struct employee employees[100]; //type-1
	
	//Employee employees[100];
	
	
	
	//Accessing and Initiating the values of emp2
	employees[0].empid = 15236;
	employees[0].pincode = 253652;
	employees[0].salary = 60000;
	employees[0].name = "Suman Raj";
	
	Employee emp2 = employees[0];
	
	printf("Printing the data of Emp1: \n");
	printf("Salary: %ld\n", employees[0].salary);
	printf("Emp Id: %d\n", employees[0].empid);
	printf("Pin Code: %d\n", employees[0].pincode);
	printf("Name: %s\n", employees[0].name);
	
	printf("\nPrinting the data of Emp2: \n");
	printf("Emp Id: %d\n", emp2.empid);
	printf("Pin Code: %d\n", emp2.pincode);
	printf("Salary: %d\n", emp2.salary);
	printf("Name: %s\n", emp2.name);
	
	
}
