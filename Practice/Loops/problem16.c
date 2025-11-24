/********************************************
 Problem: Calculate power without pow()
 ********************************************/
#include<stdio.h>
int main(){
	int number = 0;
	int remainder = 0;
	int sumOfDigits = 0;
	
	printf("Enter Number: ");
	scanf("%d",&number);
	
	while(number != 0){
		remainder = number % 10;
		number = number/10;
		sumOfDigits += remainder;
	}
	
	printf("Sum of Digits = %d\n",sumOfDigits);
	
	return 0;

}
