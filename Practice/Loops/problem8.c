/********************************************
 Problem: Check if a number is palindrome
 ********************************************/

#include<stdio.h>
int main(){
	int number = 0;
	int remainder = 0;
	int reversedNumber = 0;
	
	
	printf("Enter Number: ");
	if(scanf("%d",&number) != 1){
		printf("Invalid Input\n");
		return 1;
	}
	
	
	if(number >= 0 && number <=9){
		printf("The Number is Palindrome");
		return 0;
	}
	if(number < 0){
		printf("The Number is not Palindrome");
		return 0;
	}
	
	
	int digit = number;
	while(number != 0){
		remainder = number % 10;
		reversedNumber = reversedNumber*10 + remainder;
		number = number/10;
	}
	
	
	if(reversedNumber == digit)
		printf("The number is Palindrome\n");
	else
		printf("The number is not Palindrome\n");
		
		
		
	return 0;
}
