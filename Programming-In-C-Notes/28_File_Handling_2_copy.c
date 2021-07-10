#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

//Reading a file content using the fgetc()
int main( )
{
    FILE* fr; //File to copy from
    FILE* fw; //File to copy to
    
    //opening both the files in respective mode
    fr = fopen("Files/Test.txt","r");
    fw = fopen("Files/Test-Copy.txt","w");
    
    //conditions to check if the file exists at the location or not
    if(fr == NULL || fw == NULL) {
    	printf("File doesn't exists at given locations !");
    	exit(1);
	}
    
    
    //reading the content form the file fr and writing it to the file fw
    
    char ch = fgetc(fr);
    
    while(ch != EOF) {
    	
		fputc(ch, fw);
		
		ch = fgetc(fr);
	}

    printf("The data has been copied successfully!!\n");    
    
    //Closing both the files after operations gets completed
    fclose(fr);
    fclose(fw);
    return 0;
}
