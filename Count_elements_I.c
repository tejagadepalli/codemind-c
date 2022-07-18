#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n], b[m], c[100], i, j, k=0, x, count;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(i=0; i<m; i++)
        scanf("%d", &b[i]);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i]==b[j])
            {
                count = 0;
                for(x=0; x<k; x++)
                {
                    if(a[i]==c[x])
                        count++;
                }
                if(count==0)
                {
                    c[k] = a[i];
                    k++;
                }
            }
        }
    }
int cout=0;
    for(i=0; i<k; i++)
        cout++;
printf("%d",cout);
    return 0;
}