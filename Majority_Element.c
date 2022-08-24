#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int maxc=0;
    int index=-1;
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c>maxc)
        {
            maxc=c;
            index=i;
        }
    }
    if(maxc>n/2)
    {
        printf("%d",a[index]);
    }
    else
    {
        printf("No Majority Element");
    }
}