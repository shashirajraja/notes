#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

//Reading a file content using the fgetc()
int main( )
{
    FILE* fileA; //File to copy from
    FILE* fileB; //File to copy to
    FILE* fileMerged; //File to copy to
    
    //opening both the files in respective mode
    fileA = fopen("Files/FileA.txt","r");
    fileB = fopen("Files/FileB.txt","r");
    fileMerged = fopen("Files/FileMergedAB.txt","w");
    
    //conditions to check if the file exists at the location or not
    if(fileA == NULL || fileB == NULL || fileMerged == NULL) {
    	printf("Some Files doesn't exists at given locations !");
    	exit(1);
	}
    
    
    //reading the content form the file fileA and fileB 
   	int k = 0;
   	while(1) {
   		
   		//Reading one line from fileA
   		printf("Copying Line %d of fileA.....\n",k);
		char ch1 = fgetc(fileA);
		while(ch1 != '\n' && ch1 != EOF) {
			fputc(ch1, fileMerged);
			ch1 = fgetc(fileA);
		}	
		if(ch1 != EOF)
			fputc('\n',fileMerged);
		
		//Reading one line from fileA
		printf("Copying Line %d of fileB.....\n",k++);
		char ch = fgetc(fileB);
		while(ch != '\n' && ch != EOF) {
			fputc(ch, fileMerged);
			ch = fgetc(fileB);
		}	
		
		if(ch != EOF)
			fputc('\n',fileMerged);
		
		if(ch == EOF && ch == EOF)
			break;
   	
	}

    printf("FileA and fileB has been merged successfully into FileMergedAB !!\n");    
    
    //Closing all the files after operations gets completed
    fclose(fileA);
    fclose(fileB);
    fclose(fileMerged);
    return 0;
}
