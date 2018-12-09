//BINARY SEARCH
#include<stdio.h>
#include<conio.h>
int binsearch(int k,int a[],int n)
{
    int lower=0,mid;
    int i=-1;
    int upper;
    upper=n-1;
    while(lower<=upper)
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
    printf("The required number is not found");
    else
    printf("The required number is found");
    getch();
    return 0;
}
int main()
{
    int a[10],i,n,k;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array in ascending order: ");
    for(i=0;i<n;i++)
    {
                     scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched: "); 
    scanf("%d",&k);
    binsearch(k,a,n);
    return 0;
}
