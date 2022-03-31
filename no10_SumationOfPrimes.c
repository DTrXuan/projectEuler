/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.s */

#include <stdio.h>

typedef enum {false, true} bool;

/*
    function: check if number is Prime number
    prime number is the number that divisble only by itself and 1
    input: number
    output: true/false
 */
bool isPrimeNumber(unsigned long number)
{
    bool retVal = false;
    int i =2;
    for(; i < number; i ++)
    {
        if (number%i == 0) break;
        if (i*i > number) break;
    }

    if( i*i > number || i >= number) // need prof this
        retVal = true;
    else 
        retVal = false;

    return retVal;
}

void main (void)
{
    unsigned long long sum = 0;
    unsigned long TwoMil = 1999999;

    for (int i = 2; i < TwoMil; i++)
    {
        if(isPrimeNumber(i) == true)
            sum+=i;
    }
    printf("\n%llu",sum); //notice the format specifier
}