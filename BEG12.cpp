// Из заданного диапазона вывести число с максимальной суммой делителей

#include <stdio.h>

int  main (void)
{
  long int a,b,j,i,s,max=0, imax=0;
  puts ("Введите число ");
  scanf("%ld%ld", &a,&b);
  for(i=a;i<=b;(s>max)?(max=s,imax=i):0,i++)
   for(s=0,j=2; j<=i/2;(i%j==0)?(s+=j):0,j++);
  printf("%3ld%3ld", max, imax);
}
