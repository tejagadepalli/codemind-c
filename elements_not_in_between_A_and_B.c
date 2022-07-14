#include<stdio.h>
int main()
{
    int n,x,y;
    scanf("%d",&n);
    int a[n],i,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(!(a[i]>=x &&a[i]<=y))
        {
            printf("%d ",a[i]);
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}