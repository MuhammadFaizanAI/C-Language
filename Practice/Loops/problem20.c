/********************************************
 Problem:Find the smallest digit in a number
 ********************************************/
#include<stdio.h>
int main(){
	int number = 0;
	int remainder = 0;
		
	printf("Enter Number: ");
	scanf("%d",&number);
	int smallestDigit = number % 10;
	
	while(number != 0){
		remainder = number % 10;
		number = number/10;
		if(remainder < smallestDigit)
			smallestDigit = remainder;
	}
	
	printf("Smallest Digit is %d\n",smallestDigit);
	
	return 0;

}
