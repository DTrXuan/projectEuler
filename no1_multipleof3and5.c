#include <stdio.h>

void main(void)
{

 int sum =0;
 int Maxbound = 1000;
 
 for (int i = 0; i< Maxbound ; i++)
 {
     if((i%3 == 0) || (i%5 == 0))
     {
         sum += i;
     }
 }
 printf("\nsum: %d",sum);
}