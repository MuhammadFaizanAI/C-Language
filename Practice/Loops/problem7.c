/********************************************
 Problem: Reverse a number
 ********************************************/

#include<stdio.h>
int main(){
	int number = 0;
	int remainder = 0;
	printf("Enter Number: ");
	if(scanf("%d",&number) != 1){
		printf("Invalid Input\n");
		return 1;
	}
	if(number == 0){
		printf("0");
		return 0;
	}
	if(number < 0){
		number = -number;
		printf("-");
	}
	while(number != 0){
		remainder = number % 10;
		number = number/10;
		printf("%d",remainder);
	}
	
	return 0;
}
