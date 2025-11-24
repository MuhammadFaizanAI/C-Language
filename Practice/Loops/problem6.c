/********************************************
 Problem: Count digits in a number
 ********************************************/

#include<stdio.h>
int main(){
	int number = 0;
	int remainder = 0;
	int counter = 0;
	
	printf("Enter Number: ");
	if(scanf("%d",&number) != 1){
		printf("Invalid Input\n");
		return 1;
	}
	
	if(number == 0){
		printf("No of Digit = 1\n");
		return 0;
	}
	
	while(number != 0){
		remainder = number % 10;
		number = number/10;
		counter++;
	}
	printf("No of Digit = %d\n",counter);
}
