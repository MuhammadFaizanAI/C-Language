/********************************************
 Problem: Print the sum of first N natural numbers
 ********************************************/

#include<stdio.h>
int main(){
	// Variables Declaration
	int lastTerm;
	int i = 0;
	int sum = 0;
	
	// Input
	printf("Enter Last Term: ");
	scanf("%d",&lastTerm);
	
	// Main Logic
	while(i<=lastTerm){
		sum += i;
		i++;
	}
	
	// Output Result
	printf("Sum of first %d is %d.\n",lastTerm,sum);
	
	return 0;
}
