#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

//Reading a file content using the fgetc()
int main( )
{
    //Decleration of file
    FILE *fw ;
    int i = 0;
    char ch ;
    /*
        "w" states that the file is open in write mode
    */
    fw = fopen ( "Files\\TestWrite.txt", "w" ) ;

    //Check if the file exists or not with given location
    if(fw == NULL) {
        printf("Can't find the given file or File Doesn't exists\n");
        exit(1);
    }

    //Now writing the string data into the file:
    //For writing any character into the file, we use the fputc(char ch, FILE *fp) method;
    char *str = "This is my file content";
    
    int n = strlen(str);
    
    while(i < n) {
        fputc(str[i],fw);
        i++;
    }


    //To put the string details use puts
    //fputs(str,fw);



    fclose ( fw ) ;

    return 0;
}
