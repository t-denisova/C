// Найти в массиве экстремальные (MAX и MIN) элементы

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>

void main(void)
{
 time_t t;
 int f[20], i, max=-32768, min=32767,n;
 srand((unsigned) time(&t));
 puts("Введите размер массива ");
 scanf("%d",&n);
 // Заполнение массивов
 for (i=0;i<n;f[i]=rand()%100-50,i++);
 // Печать массива исходного
 puts("\nОдномерный массив исходный");
 for (i=0;i<n;printf("%6d",f[i++]));
 for(i=0;i<n;i++)
 {
    if(f[i]>max) max=f[i];
    if(f[i]<min) min=f[i];    
 } 
 printf("\n%d  %d", max, min);
}
