#include<stdio.h>
#include<math.h>
int main(){ int n; scanf("%d",&n); int a[n],i,j,p=0; for(i=0;i<n;i++) scanf("%d",&a[i]); for(i=0;i<n;i++) { j=sqrt(a[i]); if(pow(j,2)==a[i]) p+=a[i]; } printf("%d",p); return 0;}