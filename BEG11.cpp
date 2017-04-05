// Из заданного диапазона вывести все простые числа

#include <stdio.h>

int  main (void)
{
long int a,b,k=0,j,i;
puts ("insert the number");
scanf("%ld%ld", &a,&b);
  for(i=a;i<=b;i++)
  {
    k=0;   
    for(j=2; j<=i/2;j++)  
      if(i%j==0) k=1;
   if(k==0) printf("%3d",i);
  }
}
