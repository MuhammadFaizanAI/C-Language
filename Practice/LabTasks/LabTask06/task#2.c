#include<stdio.h>
int main(){
	printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection: BCS-1B\n\n********Program Output********\n\n");
		
	int firstNumber = 0;
	int secondNumber = 1;
	int nextNumber = 1;
	int sum = 0;
	int i;
	printf("The Fibnocii Series: ");
	for(i=0;nextNumber<10000;i++){
		printf("%d ", nextNumber);
		if(nextNumber%3==0 || nextNumber%5==0 || nextNumber%7 == 0)
			sum += nextNumber;
		nextNumber = firstNumber+secondNumber;
		firstNumber = secondNumber;
		secondNumber = nextNumber;
	}
	printf("\nThe Sum of Series : %d \n", sum);
}
