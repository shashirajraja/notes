#include<stdio.h>
#include<conio.h>
//Array Decleration
/*
WAP to input n numbers from user, store into the array of int x and print the stored value
*/
int main(){
	int n,i,j;
	
	scanf("%d",&n);
	int m[n];
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
	
	}
	
	printf("your answer is: ");
	for(j=0;j<n;j++){
		printf("%d ",m[j]);//and if we want to print the square of elenent of array then we have to write m[j]*m[j].
		
		
	}
	
	
}
