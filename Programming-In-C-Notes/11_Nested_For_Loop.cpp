#include<stdio.h>
#include<conio.h>
int main(){
	
	int i = 0;
	int j = 0;
	
	for(i=0; i<10; i++) {
		//i=0
		printf("Row no: %d\n"+i);
		for( j = 0; i < 20; j++) {
			printf("[j = %d]",j);
			i++;
		}
		printf("\n");
	}
}
