//TRAVELLING SALESMAN PROBLEM
#include<stdio.h>
#include<conio.h>
int c[10][10],g[10][10][10][10],n;
void calg(int x,int y)
{
     g[x][y][0][0]=c[x][y]+g[y][0][0][0];
     g[y][x][0][0]=c[y][x]+g[x][0][0][0];
}
void calg(int x,int y,int z)
{
     int temp1,temp2;
     temp1=c[x][y]+g[y][z][0][0];
     temp2=c[x][z]+g[z][y][0][0];
     if(temp1<temp2)
     g[x][y][z][0]=temp1;
     else
     g[x][y][z][0]=temp2;
}
void calg(int x,int y,int z,int a)
{
     int temp1,temp2,temp3;
     temp1=c[x][y]+g[y][z][a][0];
     temp2=c[x][z]+g[z][y][a][0];
     temp3=c[x][a]+g[a][y][z][0];
     if(temp1<temp2 && temp1<temp3)
     g[x][y][z][a]=temp1;
     else if(temp2<temp1 && temp2<temp3)
     g[x][y][z][a]=temp2;
     else
     g[x][y][z][a]=temp3;
}
void tsp()
{
   int i;
   for(i=2;i<=n;i++)
   g[i][0][0][0]=c[i][1];
   calg(2,3);
   calg(2,4);
   calg(3,4);
   calg(2,3,4);
   calg(3,2,4);
   calg(4,2,3);
   calg(1,2,3,4);
}
int main()
{
    int i,j;
    printf("Enter no. of cities:");
    scanf("%d",&n);
    printf("Enter cost:");
    for(i=1;i<=n;i++)
    {
                     for(j=1;j<=n;j++)
                     {
                                      scanf("%d",&c[i][j]);
                     }
    }
    tsp();
    printf("Minimum path:%d",g[1][2][3][4]);
    getch();
    return 0;
}
