#include<stdio.h>
#include<conio.h>

int main() {
	int fact,i,n;
	fact=1;
	printf("Enter the number");
	scanf("%d",&n); //5
	
	for(i=n;i>=1;i--) {
		fact=fact*i;
		//printf("%d, ", fact);
	}
		
	//fact = 1 * 5 = 5
	//fact = 5 * 4 = 20
	//fact = 20 * 3 = 60
	//fact = 60 * 2 = 120
	//fact = 120 * 1 = 120 //answer	
	printf("%d",fact);
	getch();
}


