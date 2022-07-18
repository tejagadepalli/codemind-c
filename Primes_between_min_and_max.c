#include<stdio.h>
int  prime(int n) 
{
	if (n == 1) 
	    return 0;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) 
		return 0;
	return 1;
}
int main()
{
	int n; 
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[0],max=a[0];
	int mini=0, maxi=0;
	for (int i=1;i<n;i++) 
	{
		if (max<a[i])
		{
			max=a[i];
			maxi=i;
		}
		if (min>a[i]) {
			min=a[i];
			mini=i;
		}
	}
	int c=0;
	if (mini<maxi) 
	{
		for (int i=mini;i<=maxi; i++) 
		{
			if (prime(a[i]))
				c++;
		}
	}
	else
	{
		for (int i=maxi;i<=mini;i++) 
		{
			if (prime(a[i]))
				c++;
		}
	}

	printf("%d",c);
}