#include<stdio.h>
int main()
{
   int a[100], n, i, sum=0,c=0;
    int avg;
   scanf("%d",&n);
   for(i=0; i<n; i++)
   {
     scanf("%d",&a[i]);
     sum += a[i];
   }
   avg = sum/n;
   for(i=0; i<n; i++)
   {
     if(a[i]<=avg) 
      c++;
   }
  printf("%d",c);
   return 0;
}