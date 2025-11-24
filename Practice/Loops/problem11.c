/********************************************
 Problem: Print prime numbers in a range
 ********************************************/

#include<stdio.h>
int main(){
	int number = 0;
	int prime = 1;
	int i = 2;
	int j = 2;
	
	printf("Enter Number: ");
	if(scanf("%d",&number) != 1){
		printf("Invalid Input\n");
		return 1;
	}
	
	for(i = 2; i <= number; i++){
		prime = 1;
		for(j = 2; j < i; j++){
			if(i % j == 0){
				prime = 0;
			}
		}
		if(prime == 1)
			printf("%d ",i);
	}
	
	return 0;
	
}
