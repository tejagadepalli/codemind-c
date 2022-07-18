#include<stdio.h>
int main()
{
    int i,n,arr[2000],j,fact=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        fact=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                fact++;
            }
        }
        if(fact==2)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
    
}