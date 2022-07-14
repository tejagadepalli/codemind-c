#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,x=n-1,ans=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        ans+=(a[i]*pow(2,x));
        x--;
    }
    printf("%d",ans);
}