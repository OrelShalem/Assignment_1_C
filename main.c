#include <stdio.h>
#include "NumClass.h"

int main() {

	int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
	printf("The Armstrong numbers are:");
	for(int i = num1;i<=num2;i++ ){
		if (isArmstrong(i) == 1)
		{	
			if(i == num1){
				printf(" ");
			} 
			else{
				printf(" ");
			}
			printf("%d", i);
		}

	}
	printf("\n");
	printf("The Palindromes are:");
	for(int i = num1;i<=num2;i++ ){
		if (isPalindrome(i))
		{
			if(i == num1){
				printf(" ");
			} 
			else{
				printf(" ");
			}
			printf("%d", i);
		}

	}
	printf("\n");
	printf("The Prime numbers are:");
    for(int i = num1;i<=num2;i++ ){
		if (isPrime(i))
		{
			if(i == num1){
				printf(" ");
			} 
			else{
				printf(" ");
			}
			printf("%d", i);
		}
		

	}
	printf("\n");
	printf("The Strong numbers are:");
	for(int i = num1;i<=num2;i++ ){
		if (isStrong(i))
		{	
			if(i == num1){
				printf(" ");
			} 
			else{
				printf(" ");
			}
			printf("%d", i);
		}

	}
	printf("\n");
	
	return 0;
}
