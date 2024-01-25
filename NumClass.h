#ifndef _NUM_CLASS_
#define _NUM_CLASS_

// a constant definition exported by library:
    #define TRUE  1
// a constant definition exported by library:
    #define FALSE  0

/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrong(int x);
/* will return if a number is a palindrome */
int isPalindrome(int x);
/* will return if a number is prime*/
int isPrime(int x);
/*Strong number is a special number whose sum of the factorial of digits is equal to the original
number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int x);

int isArmNumber(int x, int remainder);

int power(int remainder, int lengthOfDigit);

int reverse(int number, int sum);

int factorial(int n);

int lengthOfNumber(int num);

int isArmstrongRec(int x, int lengthOfDigit);


#endif

