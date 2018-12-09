//QUICK SORT
#include<stdio.h>
#include<conio.h>
int partition(int a[],int lower,int upper)
{
	int p,q,i,t;
	p=lower;
	q=upper+1;
	i=a[lower];
	while(q>=p)
	{
		while(a[++p]<i);
		while(a[--q]>i);
		if(q>p)
		{
			t=a[p];
			a[p]=a[q];
			a[q]=t;
		}
	}
	t=a[lower];
	a[lower]=a[q];
	a[q]=t;
	return (q);
}
int quicksort(int a[],int lower,int upper)
{
	int i;
	if(upper>lower)
	{
		i=partition(a,lower,upper);
		quicksort(a,lower,i-1);
		quicksort(a,i+1,upper);
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
	quicksort(a,0,n-1);
	printf("\nSorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
	return 0;
}
