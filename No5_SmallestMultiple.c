/* 
PROBLEM: Smallest Multiple
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */

#include <stdio.h>

void main (void){

    int i = 1;
    int number = 20; // number should start from 20
    int maxRange = 20;
    while (i<=maxRange)
    {
        // check non remainder
        for (i=1; i < (maxRange + 1); i++)
        {
            if (number%i !=0) {
                // printf("\n%d %d",number,i);
                break;
            }
        }
        number++;
    }
    printf("\nSmallest multiple: %d", number-1);
}