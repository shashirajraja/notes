#include<stdio.h>
#include<conio.h>

//Structures of structures:-----



typedef struct address {
		int flatNo;
		int pinCode;
		char* distt;
		char* state;
} Address;

struct employee {
		int empId;
		double salary;
		Address addr;
};	

void printAddress(struct address addr);
typedef struct employee Employee;
void printEmployee(Employee emp);
void scanAddress(Address* addr);
void scanEmployee(Employee* emp);

int main() {
	
	Employee emp1, emp2;
	
	emp1.salary = 50000;
	
	scanEmployee(&emp1);
	
	printEmployee(emp1);
	
}

void printEmployee(Employee emp) {
	
	printf("\n=================\nPrinting the data of Employee: \n");
	printf("EMP-ID: %d\n", emp.empId);
	printf("Salary: %lf\n", emp.salary);
	
	printAddress(emp.addr);
	
}

void printAddress(struct address addr) {
	
	printf("\nPrinting the Address of the Employee: \n");
	printf("Flat No: %d\n", addr.flatNo);
	printf("PinCode : %d\n", addr.pinCode);
	printf("Distt: %s\n", addr.distt);
	printf("State: %s\n", addr.state);
}

void scanAddress(Address* addr) {
	printf("\nEnter flatNo, pincode and distt: ");
	scanf("%d", &addr->flatNo);
	scanf("%d", &addr->pinCode);
	scanf("%s", &addr->distt);
}

void scanEmployee(Employee *emp) {
	printf("\nEnter Employee Id: ");
	scanf("%d",&emp->empId);
	scanAddress(&emp->addr);
}
/*
linkfloat() {
	float a = 0, *b ;
	b = &a ;
	a = *b ;
}*/