#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Reading a file content using the fgetc()
int main( )
{
    //Decleration of file
    FILE *fp ;
																																									
    char ch ;
    /*
        To open the file we have called the function fopen( ).
        fopen( ) performs three important tasks when you open the file in “r” mode:
        1) Firstly it searches on the disk the file to be opened.
        2) Then it loads the file from the disk into a place in memory called buffer.
        3) It sets up a character pointer that points to the first character of the buffer.
    */
    fp = fopen ( "Files\\Test.txt", "r" ) ;

    //Check if the file exists or not with given location
    if(fp == NULL) {
        printf("Can't find the given file or File Doesn't exists\n");
        exit(1);
    }

    //Accessing each character of the file and Printing the file details
    while ( 1 )
    {
        //To read the file’s contents from memory there exists a function called fgetc(FILE *fp).
        ch = fgetc ( fp ) ;

        //EOF denotes End of File
        if ( ch == EOF )
            break ;

        printf ( "%c", ch ) ;
    }

    /*
    When we attempt to write characters into this file using fputc( )
    the characters would get written to the buffer.

    When we close this file using fclose( ) three operations would be performed:
    1) The characters in the buffer would be written to the file on the disk.
    2) At the end of file a character with ASCII value 26 would get written.
    3) The buffer would be eliminated from memory.
    */

    fclose ( fp ) ;

    return 0;
}
