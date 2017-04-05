// Удалить из числа указанную цифру.

#include <stdio.h>

int  main (void)
{
  long int a, s=0,b, d=1;
  puts("Введи целое число и цифру ");
  scanf("%ld%ld",&a,&b);
  b=a;
  while (a!=0)
  {
	   d=d*10;
     s=s*10+a%10;
     a=a/10;
  }
 b=d*s+b; 
 printf("%ld",b);
}
