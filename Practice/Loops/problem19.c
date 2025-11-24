/********************************************
 Problem: Print all divisors of a number
 ********************************************/
 
#include<stdio.h>
int main(){
	int number = 0;
	int i = 1;
	
	printf("Enter Number: ");
	scanf("%d",&number);
	
	printf("Factors of %d: ",number);
	while(i <= number){
		if(number % i  == 0)
			printf("%d ",i);
		i++;
	}
}
