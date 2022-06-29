#include<stdio.h>
int main()
{
	int a,i,count=0,even=0,odd=0,b;
	scanf("%d",&a);
	b=a;
	for(i=0;a>0;i++)
	{
		if(a>0)
		 count++;
		 a=a/10;
	}
	int arr[count];
	for(i=0;i<count;i++)
	{
		arr[i]=b%10;
		b=b/10;
		if(arr[i]%2==0)
		   even++;
		else
		   odd++;
	}

	if(even==count)
	  printf("Even");
	else if(odd==count)
	  printf("Odd");
	else
	  printf("Mixed");
}