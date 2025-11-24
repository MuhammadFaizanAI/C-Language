/********************************************
 Problem: Print the sum of first N natural numbers
 ********************************************/

#include<stdio.h>
int main(){
	
	int lastTerm;
	int i = 0;
	int sum = 0;
	
	printf("Enter Last Term: ");
	scanf("%d",&lastTerm);
	
	while(i<=lastTerm){
		sum += i;
		i++;
	}
	
	printf("Sum of first %d is %d.\n",lastTerm,sum);
}
