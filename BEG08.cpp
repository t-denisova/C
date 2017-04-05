// Удалить из числа указанную цифру

#include <stdio.h>

int  main (void)
{
long int a, b ,c=0, s=0,k=1;
puts ("Введите два числа");
scanf("%ld%ld", &a, &b);
while(a!=0)
{
	s=a%10;
	if(s!=b)
  {
	 c=c+s*k;
   k=k*10;
   }
	a/=10;
}
printf("%ld", c);
}
