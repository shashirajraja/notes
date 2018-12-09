//BREADTH FIRST SEARCH
#include<stdio.h>
#include<conio.h>
int f,r,n,q[20],visited[20],a[20][20];
void bfs(int v)
{
     int i;
     f=-1;
     r=-1;
     visited[v]=1;
     f++;
     r++;
     q[r]=v;
     while(f<=r)
     {
                v=q[f];
                f++;
                for(i=1;i<=n;i++)
                {
                                 if(a[v][i]==1 && visited[i]==0)
                                 {
                                                printf("\n %d",i);
                                                visited[i]=1;
                                                r++;
                                                q[r]=i;
                                 }
                }
     }
}
int main()
{
    int i,j,s;
    printf("Enter the no. of nodes: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     visited[i]=0;
                     for(j=1;j<=n;j++)
                     a[i][j]=0;
    }
    printf("\nEnter the adjacency matrix: ");
    for(i=1;i<=n;i++)
    {
                     for(j=1;j<=n;j++)
    {
                    scanf("%d",&a[i][j]);
    }
}
    printf("\nEnter the starting vertex: ");
    scanf("%d",&s);
    bfs(s);
    getch();
    return 0;
}
