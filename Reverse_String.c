#include<stdio.h>
#include<string.h>
        
int main()
{
    int i,n;
    char str[20];
    scanf("%[^
]s",str);
    n=strlen(str);
  
    for(i=n-1;i>=0;i--)
    {
       printf("%c",str[i]);
    }
    
}