#include <stdio.h>
#include <string.h>
int main()
{
  char str[30];
 
  scanf("%[^
]", str);
  int i = 0;

  while (str[i] != NULL)
  {
    if (str[i] > 64 && str[i] < 91) 
      str[i] += 32;
    i++;
  }
  printf("%s",str);
}