//binary_search
#include<stdio.h>
#include<conio.h>
void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
int binsearch(int k,int a[],int n)
{
    int lower=0,mid;
    int i=-1;
    int upper;
    upper=n-1;
    while(upper>=lower)
    {
                       mid=(lower+upper)/2;
                       if(k==a[mid])
                       {
                                     i=mid;
                                     break;
                        }
                       else
                       {
                                     if(k>a[mid])
                                     lower=mid+1;
                                     else
                                     upper=mid-1;
                       }
    }
    if(i==-1)
    printf("\nThe required number is not found");
    else
    printf("\nThe required number is found");
    getch();
    return 0;
}
int main()
{
    int a[10],i,n,k;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array: ");
    for(i=0;i<n;i++)
    {
                     scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched: "); 
    scanf("%d",&k);
    sort(a,n);
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
    	printf("%d ",a[i]);
	}
    binsearch(k,a,n);
    return 0;
}
