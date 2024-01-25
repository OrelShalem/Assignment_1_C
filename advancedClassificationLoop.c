#include "NumClass.h"

int isArmstrong(int x){
    if (x == 0)
    {
        return TRUE;
    }
    if (x > 0 && x < 10)
    {
        return TRUE;
    }
    int lengthOfDigit = 0, sum = 0, remainder = 0;
    int originalNumber = x;
    while (originalNumber != 0)
    {
        originalNumber = originalNumber / 10;
        lengthOfDigit = lengthOfDigit + 1;
    }
    originalNumber = x;
    while (originalNumber!=0)
    {
        remainder = originalNumber % 10;
        int current = 1;
        for (int i = 0; i < lengthOfDigit; i++)
        {   
            current = current*remainder;
        }
        sum = sum + current;
        originalNumber = originalNumber/10;
    }
    if (sum == x)
    {
        return TRUE;
    }
    
    return FALSE;
}

int isPalindrome(int x){
    int originalNumber = x;
    int revNumber = 0;
    while (x != 0 )
    {
        int digit = x % 10;
        revNumber = revNumber * 10 + digit;
        x = x / 10;
    }

    if (revNumber == originalNumber)
    {
        return TRUE;
    }
    
    return FALSE;
}
