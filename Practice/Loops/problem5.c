/********************************************
 Problem: Print the Fibonacci series
 ********************************************/

#include<stdio.h>

int main(){
	int i = 1;
	int terms = 1;
	int firstNumber = 0;
	int secondNumber = 1;
	
	printf("Enter no of terms: ");
	if(scanf("%d",&terms) != 1 || terms <= 0){
		printf("Invalid Input\n");
		return 1;
	}
	
	if(terms == 1){
		printf("%d ",firstNumber);
		return 0;
	}
	
	printf("%d ",firstNumber);
	while(i < terms){      // i < terms :1 term is already written
		printf("%d ",secondNumber);
		secondNumber += firstNumber;
		firstNumber = secondNumber - firstNumber;
		i++;
	}
	
	
	return 0;
}
