#include<stdio.h>
int dig_sum(int n)
{
    int i,s=0;
    while(n!=0)
    {
        i=n%10;
        s=s+i;
        n=n/10;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+dig_sum(a[i]);
    }
    printf("%d",sum);
    
}