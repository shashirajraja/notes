//Taking input as a character array:
int main(){
	int i;
	
	char type[5];
	n=5;
	for(i=0; i<5; i++) {
		scanf("%c",&type[i]);
		//fflush(stdin);
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
