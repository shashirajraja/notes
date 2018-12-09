//NQUEENS PROBLEM
#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stdlib.h>
#include<math.h>
#define Max 10

int fnplace(int k,int i,int x[10])
{
    int j;
    for(j=1;j<=k-1;j++)
    {
                       if(x[j]==i || abs(j-k)==abs(x[j]-i))
                       return 0;
    }
    return 1;
}
void fnQueens(int k,int n)
{
     int i,j,l;
     static int count,x[10];
     for(i=1;i<=n;i++)
     {
                      
                     if(fnplace(k,i,x))
                     {
                                       x[k]=i;
                                      
                                       if(k==n)
                                       {
                                               printf("\nFeasible Solution: %d",++count);
                                               printf("\nSolutions are: ");
                                               for(j=1;j<=n;j++)
                                               printf(" %d ",x[j]);
                                               for(j=1;j<=n;j++)
                                               {
                                                                printf("\n");
                                                                for(l=1;l<=n;l++)
                                                                {
                                                                                 if(l==x[j])
                                                                                 printf(" X ");
                                                                                 else
                                                                                 printf(" 0 ");
                                                                }
                                               }
                                       }
                                       else
                                       fnQueens(k+1,n);
                     }
     }
}                                          
int main()
{
    int no;
    printf("Enter the number of Queens: ");
    scanf("%d",&no);
    fnQueens(1,no);
    getch();
    return 0;
}
