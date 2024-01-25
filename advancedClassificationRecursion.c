#include "NumClass.h"

int isArmstrong(int x){
    if (x == 0) {
        return FALSE;
    }

    int lengthOfDigit = lengthOfNumber(x);
    int sum = isArmstrongRec(x, lengthOfDigit);
    if(x == sum){
        return TRUE;
    }
    return FALSE;
}

int isArmstrongRec(int x, int lengthOfDigit){
    if (x == 0) {
        return FALSE;
    }

    int sum = power(x%10, lengthOfDigit) + isArmstrongRec(x/10, lengthOfDigit);
    return sum;
}

int lengthOfNumber(int num) {
    if(num == 0)
        return 0;
    else
        return 1 + lengthOfNumber(num / 10);
}


int power(int digit, int lengthOfDigit) {
    if(lengthOfDigit == 0)
        return 1;
    else
        return digit * power(digit, lengthOfDigit-1);
}

int isPalindrome(int x){
    if(x == 0){
        return TRUE;
    }
    int y = reverse(x,0);
   if(x == y){
    return TRUE;
   }
   return FALSE;
  
}

int reverse(int number, int sum){
    if(number != 0){
        int remainder = number % 10;
        sum = sum * 10 + remainder;
        return reverse(number / 10,sum);
    }
    else{
        return sum;
    }
    return sum;
}

