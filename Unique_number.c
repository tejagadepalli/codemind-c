#include<stdio.h>
int main()
{
    int n,a[100],i,j,k=0,r,d,c=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10; 
        a[k]=r; 
        k++;
        n=n/10;
    }
    for(i=0;i<k;i++)
    { 
        d=0; for(j=0;j<k;j++)
        {
            if(a[i]==a[j] && i!=j) 
            {
                d=1;
                break;
                }
            }
            if(d==0) 
            { 
                c++; 
            }
    } 
    if(c==k)
    printf("Unique Number");
    else
    printf("Not Unique Number");
}