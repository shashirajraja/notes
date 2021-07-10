#include<stdio.h>
#include<conio.h>
int stoi(char*);
int main(int argc, char* argv[]) {
	
	printf("Hello World\n");
	
	printf("Number of Arguments including fileName i.e value of argc: %d\n", argc);

	int i = 0;
	int sum = 0;
	while(argv[i] != NULL) {
		printf("%dth argument is %s\n",i+1, argv[i]);
		sum = sum + stoi(argv[i]); 
		i++;
	}

	printf("Total Sum is %d", sum);
	printf("Hello Guysss!");
	
	
}

int stoi(char* x) {
	
	return 100;
}	