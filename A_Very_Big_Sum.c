#include<stdio.h>
int main(){ int n,i; scanf("%d",&n); long long int r[n],t=0; for(i=0;i<n;i++) { scanf("%lld",&r[i]); t+=r[i]; } printf("%lld",t); return 0;}