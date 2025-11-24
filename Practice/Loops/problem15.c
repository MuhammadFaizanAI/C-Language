/********************************************
 Problem: Calculate power without pow()
 ********************************************/
#include<stdio.h>
int main(){
	int number = 0;
	int remainder = 0;
	int evenCounter = 0;
	int oddCounter = 0;
	
	printf("Enter Number: ");
	scanf("%d",&number);
	
	while(number != 0){
		remainder = number % 10;
		number = number/10;
		(remainder % 2 == 0) ? evenCounter++ : oddCounter++ ;
	}
	
	printf("Even Digits: %d\nOdd Digits: %d\n", evenCounter, oddCounter);
	
	return 0;

}
