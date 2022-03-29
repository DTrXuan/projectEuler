/* 
PROBLEM: 10001st prime
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
 */
#include <stdio.h>
typedef enum {false, true} bool;

bool isPrimeNumber(int number)
{

    bool retVal = false;
    int i = 2;
    for (; i < number; i++)
    {
        if (number%i == 0) break;
    }
    if ( i == number)
    {
        retVal = true; 
    }
    
    return retVal;
}

void main(void){

    int pos = 1; // initial index of Prime number
    int number = 2;
    int tgtPos = 10001; // index of prime number you want to find.
    while(1)
    {
        if (isPrimeNumber(number) == true) 
        {
            if (pos == tgtPos) break;
            pos++;
        }
        number++;
    }

    printf("\n%d", number);
}