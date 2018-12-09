//0/1 KNAPSACK
#include<stdio.h>
#include<conio.h>
void sort(int n,float w[50],float p[50])
{
     int i,j;
     float temp;
     for(i=0;i<n;i++)
     {
                     for(j=i+1;j<n;j++)
                     {
                                       if(p[i]<p[j])
                                       {
                                                    temp=p[j];
                                                    p[j]=p[i];
                                                    p[i]=temp;
                                                    temp=w[j];
                                                    w[j]=w[i];
                                                    w[i]=temp;
                                       }
                     }
     }
}
void knapsack(int no,float wt[50],float pft[50],float max)
{
     int i,j;
     float total=0;
     float tpft=0;
     for(i=0;i<no;i++)
     {
                      if((total+wt[i])<=max)
                      {
                                            total=total+wt[i];
                                            tpft=tpft+pft[i];
                      }
                      else
                      for(j=i+1;j<no;j++)
                      {
                                if((total+wt[j])<=max)
                                 {
                                            total=total+wt[j];
                                            tpft=tpft+pft[j];
                                 } 
                      }
     }
     printf("\n Total weight %f ",total);
     printf("\n Total value %f ",tpft); 
}
int main()
{
    int n,i;
    float w[10],c,p[10],max;
    printf("Enter the no of items: ");
    scanf("%d",&n);
    printf("Enter the value of items: ");
    for(i=0;i<n;i++)
    {
                    scanf("%f",&p[i]);
    }
    printf("Enter the weight of items: ");
    for(i=0;i<n;i++)
    {
                    scanf("%f",&w[i]);
    }
    printf("Enter the capacity: ");
    scanf("%f",&max);
    sort(n,w,p);
    knapsack(n,w,p,max);
    getch();
    return 0;
}
    
    
     
