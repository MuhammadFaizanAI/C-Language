/********************************************
 Problem:  Check if a number is prime
 ********************************************/

#include<stdio.h>
int main(){
	int number = 0;
	int i = 2;
	
	printf("Enter Number: ");
	if(scanf("%d",&number) != 1){
		printf("Invalid Input\n");
		return 1;
	}
	
	while(i < number){
		if(number % i == 0){
			 printf("Not a Prime Number\n");
			 return 0;
		}
		i++;
	}
	
	printf("Prime Number\n");
	
	return 0;
	
}
