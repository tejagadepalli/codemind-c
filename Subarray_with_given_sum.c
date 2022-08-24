#include<stdio.h>
int main()
{
    int nt,p;
    scanf("%d",&nt);
    for(p=0;p<nt;p++)
    {
        int s=0,t=0,n,b,i,j,arr[1000];
        scanf("%d%d",&n,&b);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=1;i<=n;i++)
        {
            int c=0;
            for(j=i;j<=n;j++)
            {
                c+=arr[j];
                if(c==b)
                {
                    printf("%d %d
",i,j);
                    t=1;
                    s=1;
                    break;
                }
            }
            if(t==1)
            {
            break;
            }
        }
        if(s==0)
        {
            printf("-1
");
        }
    }
}