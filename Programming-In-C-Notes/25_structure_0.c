#include<stdio.h>
#include<conio.h>

//Structures:-----

int main() {



	//Structure decleration	 Type 1
	/*
		struct <structure_name> {
			
			datatype variableName;
			
		
			};
	
	*/
	
	
	struct employee {
		int empid;
		int pincode;
		int salary;
		char* name;
		
	};	
	
	struct employee emp2, emp3; //Variable declearation
	
	struct employee emp1  = {1010, 824253, 5000, "Suman"}; //Decleration along with initialization
	
	
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
