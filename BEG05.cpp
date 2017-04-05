// Приписать к введенному числу его же перевернутого перевернутого

#include <stdio.h>

int  main (void)
{
  long int a, s=0,b;
  puts("Введи целое число ");
  scanf("%ld",&a);
  b=a;
  while (a!=0)
  {
	     b=b*10;
       s=s*10+a%10;
       a=a/10;
  }
 b=b+s; 
 printf("%ld",b);
}
