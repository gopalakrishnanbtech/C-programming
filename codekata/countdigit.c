#include <stdio.h>
 
int main()
{
  int n, r, c=0;
 
  printf("\n  Enter any number\n");
  scanf("%d", &n);
 
  while(n > 0)
  {
     n = n / 10;
     c = c + 1;  
  }
 
  printf("\n Number of Digits in a Given Number = %d", c);
  return 0;
}
