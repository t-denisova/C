// Анализ числа на ПРОСТОТУ

#include <stdio.h>

int  main (void)
{
long int a,b,k=0;
puts ("Введите число");
scanf("%ld", &a);
for(b=2;b<=a/2;b++)
    if(a%b==0) k=1;
if(k==0)
 printf("Простое");
 else printf("Составное");
}
