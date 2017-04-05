
// Получение наибольшего из трех заведомо разных целых чисел

#include <stdio.h>

int  main (void)
{
  int x=0, y, z;
  puts("Введи три разных целых числа ");
  scanf("%d%d%d",&x,&y,&z);
  if ((x>y ) && (x>z)) printf ("%d",x);
   else
    if (y>z ) printf ("%d",y);
     else printf ("%d",z);
}

