// Переворот введенного числа

#include <stdio.h>

int  main (void)
{
  long int a, s=0;
  puts("Введи целое число ");
  scanf("%ld",&a);
  while (a!=0)
  {
       s=s*10+a%10;
       a=a/10;
  }
 printf("%ld",s);
}
