// Вывод всех делителей введенного числа

#include <stdio.h>

int  main (void)
{
long int a,b;
puts ("Введите число ");
scanf("%ld", &a);
for(b=2;b<=a/2;b++)
    if(a%b==0)
     printf("%ld ",b);   
}
