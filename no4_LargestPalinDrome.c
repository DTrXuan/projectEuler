/*
PROBLEM: Largest Palindrome product
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <math.h>
typedef enum {false, true} bool;
typedef long int32;
typedef int int16;
typedef char int8; 

/* 
function: check if a number is Palindrome
input: number
reuturn: true/false 
*/
bool isPalindromeNumber(int32 number){
    long long int temp = 0;
    long long int src_num = number;
    bool retVal = false;

    while (src_num >0){
        temp = temp*10 +src_num%10;
        src_num = src_num/10;
        /* code */
    }
    if (temp == number){
        retVal = true;
    }
    else{
        retVal = false;
    }
    
    return retVal;
}

/* 
function: check the number can be made from produc of two 2-digits numbers 
input: number
return: true/false
*/
bool isMadeFrom2NumpProduct(int32 number, int16 numDigit){
    
    int32 srcNumber = number;
    int32 minFactor = pow((double)10,(double)numDigit - 1);
    int32 maxFactor = pow((double)10,(double)numDigit);
    int16 i = minFactor;
    bool retVal = false;
    for(;i<maxFactor;i++)
    {
        if( (srcNumber%i == 0) && (srcNumber/i > minFactor) && (srcNumber/i < maxFactor)) {
            retVal = true;
            printf("\n%d = %d*%d", srcNumber,i,srcNumber/i);
        }
    }
    return retVal;
}

void main (void)
{

    // XXX*YYY = 
    int32 Largest_palindrom = 0;
    
    for (int i = 0; i < 999*999; i++)
    {
        if (isPalindromeNumber(i) == true) 
        {
            if (isMadeFrom2NumpProduct(i,3)) Largest_palindrom = i; 
        }
        //    
    }

    printf("\n%d",Largest_palindrom);
    

}

