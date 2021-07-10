#include<stdio.h>
#include<conio.h>

//Structures of structures:-----

struct book
{
//	int qty[3];
	char* name ;
	float price ;
	int pages ;
} ;

typedef struct book Book;

Book b[2] ;

linkfloat(){
	float a = 0, *b ;
	b = &a ; /* cause emulator to be linked */
	a = *b ; /* suppress the warning - variable not used */
}

int main() {
	
	int i ,j;
	
	for ( i = 0 ; i < 2 ; i++ ){
		printf ( "\nEnter name, price and pages " ) ;
		scanf ( "%s %f %d", b[i].name, &b[i].price, &b[i].pages ) ;
		
//		printf("Enter the quantity available in your 5 stores:\n");
//		for(j = 0; j < 3; j++) {
//			scanf("%d", &b[i].qty[j]);
//		}
	}
	printf("printing output\n");
	
	for ( i = 0 ; i < 2 ; i++ ){
		printf("=====");
		printf ( "%s\n", b[i].name);
		printf("%d\n", b[i].price);
		printf("%d\n", b[i].pages ) ;
//		printf("The Book quantity available in our 5 stores:\n");
//		for(j = 0; j < 3; j++) {
//			printf("%d", b[i].qty[j]);
//		}
	}
	
}

