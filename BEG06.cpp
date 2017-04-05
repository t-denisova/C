// Приписать к перевернутому введенному числу его же исходного

#include <stdio.h>

int  main (void)
{
  long int a, s=0,b, d=1;
  puts("Введи целое число ");
  scanf("%ld",&a);
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
