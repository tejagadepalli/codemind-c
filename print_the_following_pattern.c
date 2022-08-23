#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-1;j++)
        {
          printf("%d",j);
        }
        for(int k=n-3;k>0;k--)
        {
            printf("%d",k);
        }
        printf("
");
    }
}