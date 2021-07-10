#include<stdio.h>
#include<conio.h>

//Structures of structures:-----

int main() {

	
	struct address {
		int flatNo;
		int pinCode;
		char* distt;
		char* state;
	};
	
	typedef struct address Address;
	
	struct employee {
		int empId;
		double salary;
		struct address addr;
		//Address addr;
	};
	
	typedef struct employee Employee;
	
	
	Employee emp1, emp2;
	
	
	//Accessing data
	
	emp1.empId = 1010;
	emp1.salary = 50000;
	emp1.addr.flatNo = 1000;
	emp1.addr.pinCode = 525635;
	emp1.addr.distt = "Gaya";
	emp1.addr.state = "Bihar";
	
	printf("Printing the data of Emp1: \n");
	printf("EMP-ID: %d\n", emp1.empId);
	printf("Salary: %d\n", emp1.salary);
	printf("Flat No: %d\n", emp1.addr.flatNo);
	printf("PinCode : %d\n", emp1.addr.pinCode);
	printf("Distt: %d\n", emp1.addr.distt);
	printf("State: %d\n", emp1.addr.state);
	
	
	
	
	
	
}



