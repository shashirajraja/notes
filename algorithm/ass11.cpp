//FLOYD-WARSHAL'S PROBLEM
#include<stdio.h>
#include<conio.h>
void floyd(int cost[10][10],int n)
{
     int i,j,k,t,x[10][10];
     for(i=0;i<n;i++)
     {
                     for(j=0;j<n;j++)
                     {
                                     x[i][j]=cost[i][j];
                     }
     }
     for(k=0;k<n;k++)
     {
                     for(i=0;i<n;i++)
                     {
                                     for(j=0;j<n;j++)
                                     {
                                                     if((x[i][k]==1000) || (x[k][j]==1000))
                                                     t=1000;
                                                     else
                                                     t=x[i][k]+x[k][j];
                                                     x[i][j]=(x[i][j]>t?t:x[i][j]);
                                     }
                     }
     }
     printf("The distance is:\n");
     for(i=0;i<n;i++)
     {
                     for(j=0;j<n;j++)
                     {
                                     printf("%d",x[i][j]);
                     }
                     printf("\n");
     }
    
}
int main()
{
    int i,j,n,a[10][10];
    printf("\nEnter the no. of vertices: ");
    scanf("%d",&n);
    printf("\nEnter the cost matrix: "); 
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    scanf("%d",&a[i][j]);
                    }
    }   
    floyd(a,n);
    getch();
    return 0;
}                            
