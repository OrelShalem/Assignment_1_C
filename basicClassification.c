#include "NumClass.h"

int isPrime(int x){
    if(x < 1){
        return FALSE;
    }
    if (x == 1)
    {
        return TRUE;
    }
    
     for (int i = 2;  i*i <= x; i++)
    {
        if(x % i == 0){
            return FALSE;
        }
    }
    
    return TRUE;

}

int isStrong(int x){
    if (x == 0 || x == 1)
    {
        return TRUE;
    }
    
    int originalNumber = x;
    int sum = 0;
    while (x > 0)
    {
        sum = sum + factorial(x % 10);
        x = x / 10;
    }

    if (sum == originalNumber)
    {
        return TRUE;
    }
    return FALSE;
}

int factorial(int n){
    int resulte = 1;
    for (int i = 2; i <= n; i++)
    {
        resulte = resulte * i;
    }
    
    return resulte;
}