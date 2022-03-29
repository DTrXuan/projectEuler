/* 
PROBLEM: The Sum Squarce Difference
The sum of the squares of the first ten natural numbers is: 
1^2 +2^2 +...+10^2
The square of the sum of the first ten natural numbers is: 
(1+2+...+10)^2
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
(1+2+...+10)^2 - 1^2 +2^2 +...+10^2
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum. */

#include <stdio.h>

void main (void){
    int sumofSquare = 0;
    int squarofSum = 0;

    for (int i = 1; i <= 100; i++)
    {
        sumofSquare += i*i;
        squarofSum +=i;
    }
    printf("difference: %d", squarofSum*squarofSum - sumofSquare);
    
}