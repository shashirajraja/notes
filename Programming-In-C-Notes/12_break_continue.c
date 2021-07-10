#include<stdio.h>
#include<conio.h>
//BREAK and Continue
//Q. WAP TO PRINT FROM 1 TO 100 LEAVING THE RANGE 25 - 40 AND 
// USE THE RANGE of FOR LOOP from 1 TO 150 and print without any if-else

int main(){
	
	int i;
	for(i=1;i<=150; i++){
		if(i>=25&&i<=40)
			continue;  //continue is used to skip the next statement for current iteration and continue the next for loop iteration
			
		printf("%d ",i);
		
		if(i>=100)
			break; //Break is used to exit from the current for loop
	}
	

}
