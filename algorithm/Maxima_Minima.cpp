//MAXIMUM_MINIMUM PROBLEM
//Divide_And_Conquer Method
#include<stdio.h>
#include<conio.h>
int max_min(int a[],int mid,int n)
{
	int max1=0,max2=0,min1=1000,min2=1000,i,j;
	for(i=0;i<mid;i++)
	{
		if(max1<a[i])
		max1=a[i];
		if(min1>a[i])
		min1=a[i];
	}
	printf("\n Max and Min no of left sub list: ");
	printf("%d %d",max1,min1);
	for(j=mid;j<n;j++)
	{
		if(max2<a[j])
		max2=a[j];
		if(min2>a[j])
		min2=a[j];
	}
	printf("\n Max and Min no of right sub list: ");
	printf("%d %d",max2,min2);
	if(max1>max2)
	printf("\n Maximum no is: %d",max1);
	else
	printf("\n Maximum no is: %d",max2);
	if(min1>min2)
	printf("\n Minimum no is: %d",min2);
	else
	printf("\n Minimum no is: %d",min1);
}
int main()
{
	int a[50],n,mid,l=0,i;
	printf("\nEnter the no of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	mid=(l+n)/2;
	max_min(a,mid,n);
	getch();
	return 0;
}
