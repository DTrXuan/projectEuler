/* 
PROBLEM: Special Pythagorean triplet
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 52.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc. */

#include <stdio.h>

void main(void)
{
    /* find a, b, c
        a^2 + b^2 = c^2 -> a^2 + b^2 = (1000 -a -b)^2
        a + b + c = 1000 -> c = 1000 - a -b
    */
   int a,b,c; a=0; b=0; c=0;

   for (c = 0; c < 1000; c++)
   {
       for ( b = 0; b < 1000; b++)
       {
           if ( (1000 - c - b)*(1000 - c - b) + b*b == c*c)
            {
                a = 1000 - b - c;
                if(a>0 && b>0 && c>0 )
                {
                    int product = a*b*c;
                    printf("\n%d %d %d %d",a,b,c,product);
                } 
            }
       }      
   }

}