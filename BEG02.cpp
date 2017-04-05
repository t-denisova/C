// Получение нового числа двукратным повторением исходного

#include <stdio.h>

int  main (void)
{
  long int a, b,c;
  puts("Введи целое число ");
  scanf("%ld",&a);
  b=c=a;
  while (a!=0)
  {
       b=b*10;;
       a=a/10;
  }
 b=b+c;
 printf("%ld",b);
}
