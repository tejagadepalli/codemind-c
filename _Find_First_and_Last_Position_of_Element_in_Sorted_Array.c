#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,c=-1,d=-1;
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x && c==-1)
        {
            c=i;
        }
        if(a[i]==x)
        {
            d=i;
        }
    }
    printf("%d %d",c,d);
}