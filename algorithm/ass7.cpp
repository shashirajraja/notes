//MATRIX-CHAIN MULTIPLICATION
#include<stdio.h>
#include<conio.h>
#include<limits.h>
int Matrixchain(int p[],int i,int j)
{
	int k;
	int min=INT_MAX;
	int count;
	if(i==j)
	return 0;
	for(k=i;k<j;k++)
	{
		count=Matrixchain(p,i,k)+Matrixchain(p,k+1,j)+p[i-1]*p[k]*p[j];
		if(count<min)
		min=count;
	}
	return min;
}
int main()
{
	int a[]={10,100,5,50};
	int n=sizeof(a)/sizeof(a[10]);
	printf("\nThe value of n: %d",n);
	printf("\nMin no. of multiplications are: %d",Matrixchain(a,1,n-1));
	getch();
	return 0;
}
