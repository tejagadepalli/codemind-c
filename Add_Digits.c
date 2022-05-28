#include<stdio.h>
int main()
{
    int sum=0,n,r,t,c=0;
    scanf("%d",&n); 
    while(n!=0)
    {
        c=0; t=n; sum=0;
        while(n>0)
        { 
            r=n%10; sum+=r; n=n/10; c++;
        } 
        if(c==1) 
        { 
            printf("%d",sum); 
        } 
        else 
        {
            n=sum; 
        }
    }
}