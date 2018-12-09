//MERGE SORT
#include<stdio.h>
#include<conio.h>
int merge(int a[],int lower1,int upper1,int lower2,int upper2)
{
	int p,q,j,n,d[100];
	p=lower1;
	q=lower2;
	n=0;
	while((p<=upper1) && (q<=upper2))
	{
		d[n++]=(a[p]<a[q])?a[p++]:a[q++];
	}
	while(p<=upper1)
	d[n++]=a[p++];
	while(q<=upper2)
	d[n++]=a[q++];
	for(q=lower1,n=0;q<=upper1;q++,n++)
	{
		a[q]=d[n];
	}
		for(q=lower2,j=n;q<=upper2;q++,j++)
	{
		a[q]=d[j];
	}
	return 0;
}
int mergesort(int a[],int lower,int upper)
{
	int mid;
	if(upper>lower)
	{
		mid=(lower+upper)/2;
		mergesort(a,lower,mid);
		mergesort(a,mid+1,upper);
		merge(a,lower,mid,mid+1,upper);
	}
	return 0;
}

int main()
{
	int n,a[10],i,k;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("\nSorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	return 0;
}
