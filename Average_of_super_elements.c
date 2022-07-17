#include<stdio.h>
int main()
{
    int n,i,j;
    float res=0,s=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0 ,x=a[i];
       for( j=0;j<n;j++)
       {   
           
           if(a[i]==a[j])
           {
              c++;
           }
       }
       if(c==x)
       {
           sum+=a[i];
           s++;
           a[i]=0;
       }
     
    }
    if(s==0)
    {
        printf("-1");
    }
    else
    {
        res=sum/s;
        printf("%.2f",res);
    }
}