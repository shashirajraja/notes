//DIJKSTRA'S ALGORITHM
#include<stdio.h>
#include<conio.h>
void dijk(int p[100][100],int n)
{
	int c=1,s,i,dist[100],cnt=0,z,k,j,u,v;
	while(c)
	{
		printf("Enter the source node whose shortest path is to be determined: ");
		scanf("%d",&s);
	}
		for(i=1;i<=n;i++)
		dist[i]=p[s][i];
		for(k=2;k<n;k++)
		{
			for(u=1;u<=n;u++)
			{
				for(z=1;z<=n;z++)
				{
					if(p[z][u]!=100)
					cnt+=1;			
				}
				if(cnt!=0)
				{
					cnt=0;
					for(i=1;i<=n;i++)
					{
						if(dist[u]>(dist[i]+p[i][u]))
						dist[u]=dist[i]+p[i][u];
					}
				}
			}
		}
	//}	
	printf("\nShortest path from: %d",s);
	for(i=1;i!=s,i<=n;i++)
	if(i!=s)
	printf("\n%d:%d",i,dist[i]);
	printf("\nContinue? y=1 or n=0");
	scanf("%d",&c);
}
int main()
{
	int n,i,j,cost[100][100];
	printf("\nEnter the no of vertices: ");
	scanf("%d",&n);
	printf("\nEnter the cost matrix: ");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);		
		}
	}
	dijk(cost,n);
	getch();
	return 0;
}

