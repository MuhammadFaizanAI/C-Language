/********************************************
 Problem: Calculate power without pow()
 ********************************************/
 
#include<math.h>
#include<stdio.h>

int main(){
	
	int number = 0;
	int remainder = 0;
	int power = 0;
	int sumOfDigits = 0;
	int powerSum = 0;
	
	printf("Enter Number: ");
	scanf("%d",&number);
	
	int temp = number;
	while(temp != 0){
		remainder = temp % 10;
		temp = temp/10;
		sumOfDigits += remainder;
		power++;
	}

	while(number != 0){
		remainder = number % 10;
		number = number/10;
		powerSum = powerSum + pow(remainder,power);
	}
	
	(powerSum == sumOfDigits) ? printf("\nArmstrong Number\n"):
								printf("\nNot a Armstrong Number\n");
	
	return 0;
	
}

