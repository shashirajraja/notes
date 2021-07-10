#include<stdio.h>
#define MAX 10

//Methods in string
int main() {
	/*   
		Length of String: 
		
		int strlen(char *);
		
		int length = strlen(firstString);
		
		returns length of the string
	*/
	


	
	char firstString[] = "Suman";
	
	char lastString[] = "Suman Raj";
	
	int len1 = strlen(firstString);
	int len2 = strlen(lastString);
	printf("%d, %d",len1, len2);

	
}

