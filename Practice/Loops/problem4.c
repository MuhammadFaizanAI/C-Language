/********************************************
 Problem: Print the factorial of a number
 ********************************************/

#include<stdio.h>
int main(){
	
	int number = 0;
	int factorial = 1;
	int counter = 2;
	
	// Input with Validation
	printf("Enter Number: ");
	if(scanf("%d",&number) != 1){
		printf("Invalid Input!\n");
		return 1;
	}
	
	// Handle edge case
	if(number == 0){
		printf("Factorial = 1\n");
		return 1;
	}
	
	if(number < 0){
		printf("Factorial does not exist for negative number\n");
		return 0;
	}
	
	// Main Logic
	while(i<=number){
		fact *= i;
		i++;
	}
	
	// Output result
	printf("Factorial = %d\n",fact);
	
	return 0;
}
