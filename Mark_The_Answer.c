#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int a[n],c=0,flag=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(flag==1 && a[i]>x)
        {
            break;
        }
        if(a[i]>x)
        {
            flag=1;
        }
        else
        {
            c++;
        }
    }
    printf("%d",c);
}