//MCOLOURING PROBLEM
#include<stdio.h>
#include<conio.h>
int m,n;
int found=0;
int g[10][10];
int x[10];
void NextValue(int k)
{
     int j;
     while(1)
     {
             x[k]=(x[k]+1)%(m+1);
             if(x[k]==0)
             break;
             for(j=1;j<=n;j++)
             {
                              if((g[j][k]!=0) && (x[k]==x[j]))
                              break;
             }
             if(j==n+1)
             break;
     }
}
void mColouring(int k)
{
     int i;
     while(1)
     {
             NextValue(k);
             if(x[k]==0)
             break;
             if(k==n)
             {
                     for(i=1;i<=k;i++)
                        printf("%d\t",x[i]);
					 printf("\n");
					 found=1;
					 break;
             }
             else
             {
                 mColouring(k+1);
             }
     }
}
int main()
{
    int i,j;
    printf("Enter number of vertices:");
    scanf("%d",&n);
    printf("Enter adjacency matrix:");
    for(i=1;i<=n;i++)
    {
                     for(j=1;j<=n;j++)
                     {
                                      if ((i!=j)&&(i<j))
                                      printf("%d...%d\n",i,j);
                                      scanf("%d",&g[i][j]);
                                      g[j][i]=g[i][j];
                                      if(i==j)
                                      g[i][j]=0;
                     }
    }
    printf("Enter number of colours available:");
    scanf("%d",&m);
    mColouring(1);
    if(found==0)
    printf("No solution is possible");
    getch();
    return 0;
}
             
             
                              
             
