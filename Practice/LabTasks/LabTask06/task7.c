#include<stdio.h>
int main(){
	printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection: BCS-1B\n\n********Program Output********\n\n");
	int j,input,i;
	int array[9];
	int arraySum = 0;
	for(j = 0; j<9; j++){
		printf("Number at Index [%d]: ",j);
		scanf("%d",&input);
		array[j] = input;
	}
	printf("Array: ");
	for(j = 0; j<9; j++){
		printf("%d ",array[j]);
		arraySum += array[j];
	}
		printf("\nArray Sum : %d\n",arraySum);

}
