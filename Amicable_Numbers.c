#include<stdio.h>
int main()
{
    int n,m,i,d=0,f=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n/2;i++)
    { 
        if(n%i==0)
        {
            d+=i; 
        } 
    } 
    for(i=1;i<=m/2;i++)
    {
        if(m%i==0)
        {
            f+=i; 
        } 
    }
    if(n==f && m==d)
    printf("Amicable");
    else 
    printf("Not Amicable"); 
    return 0;
}