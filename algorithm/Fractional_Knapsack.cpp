//FRACTIONAL KNAPSACK
#include<stdio.h>
#include<conio.h>
void sort(int n,float p[50],float w[50],float v[50])
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
                                                    temp=v[j];
                                                    v[j]=v[i];
                                                    v[i]=temp;
                                                    temp=w[j];
                                                    w[j]=w[i];
                                                    w[i]=temp;
                                       }
                     }
     }
}
int knapsackfrac(float p[],float v[],float w[],int n,int c)
{
     int i;
     float t=0;
     for(i=0;i<n;i++)
     {
                      if(t<c)
                      {
                             if((t+w[i])>c)
                             {
                                w[i]=c-t;
                                v[i]=w[i]*p[i];
                                t=c;
                             } 
                             else
                             {
                                 t=t+w[i];
                             }
                      }
                      else
                      break;
     }
     return i;
}
int main()
{
    int n,i,c;
    float w[10],p[10],v[10];
    float sum_vi=0.0;
    float sum_wi=0.0;
    printf("Enter the no of items: ");
    scanf("%d",&n);
    printf("Enter the value of items: ");
    for(i=0;i<n;i++)
    {
                    scanf("%f",&v[i]);
                    
    }
    printf("Enter the weight of items: ");
    for(i=0;i<n;i++)
    {
                    scanf("%f",&w[i]);
                    p[i]=(v[i]/w[i]);
    }
    printf("Enter the capacity: ");
    scanf("%d",&c);
    sort(n,p,w,v);
    n=knapsackfrac(p,v,w,n,c);
    for(i=0;i<n;i++)
    {
                    sum_vi=sum_vi+v[i];
                    sum_wi=sum_wi+w[i];
    }
    printf("\n Total weight %f ",sum_wi);
    printf("\n Total value %f ",sum_vi); 
    getch();
    return 0;
}
