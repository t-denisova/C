// Найти в массиве экстремальные (MAX и MIN) элементы
// и поменять их местами местами.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>

int main(void)
{
 time_t t;
 int f[20], i, max=-32768, min=32767,n,imax, imin;
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
    if(f[i]>max) {
	    max=f[i];
		  imax=i;	
	} 
    if(f[i]<min){
    	min=f[i];
    	imin=i;
	}  
 } 
 printf("\n%d  %d %d %d", max, min,imax,imin);
 puts("\n");
 for (i=0;i<n;(i==imin)?(f[i]=max):(f[i]),(i==imax)?(f[i]=min):(f[i]),printf("%6d",f[i++]));
}
