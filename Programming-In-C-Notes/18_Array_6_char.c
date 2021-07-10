#include<stdio.h>
void printArray(int[], int);
//Array of characters, i.e string

int main() {
	
	char ch;
	
	//scanf("%c",&ch); //will only take one character as input
	
	ch = getch(); // will directly return the input value, value will be hidden on console while entering
	
	printf("Entered character is: %c\n", ch); // will print the character
	putch(ch);
	printf("\n");
	

	//Declaring and initializing character array
	
	char name[] = {'s','u','m','a','n','\0'};
	
	int i=0, n = 5;
	
	//printing the values of the char array
	for(i=0; i<n; i++) {
		printf("%c",name[i]);   
	}
	printf("\n");
	
	//printing the values of the char array using pointer:
	for(i=0; i<n; i++) {
		printf("%c",*(name+i));
	}
	printf("\n");
	
	//printing the values of the char using string format specifier %s
	printf("%s\n",name); //printing like a string
	
	//Taking input as a character array:
	char type[5];
	
	for(i=0; i<5; i++) {
		scanf("%c",&type[i]);
		fflush(stdin);
	}
	
	//printing values
	for(i=0; i<n; i++) {
		printf("%c",*(type+i));
	}
	printf("\n");
	
	
	//Taking input using the %s string format specifier
	char educations[10] ;
	
	//scanf("%s", &educations); //single word input of string until it gets an space
	
	//if you want to scan a line as input having spaces in it, then use gets() or following specifier:
	
	scanf("%[^\n]s", &educations);
	
	//gets(educations); //Will take input as line having spaces too
	
	//printf("%s", educations); //single line string print
	
	puts(educations); //function for printing the string values
	
	
}

