/*
PROBLEM: largest Prime factor
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>

void main(void)
{

    long long int number = 600851475143;
    long long int larest_prime_factor = 0;
    long long int i = 1;
        
    while(number > 1){
        if (number%i == 0){
            number = number/i;
            larest_prime_factor = i ;
        }

        i++;
    }
    
    printf("largest prime factor = %d",larest_prime_factor);
}