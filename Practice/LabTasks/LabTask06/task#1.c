#include<stdio.h>
int main(){
	printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection: BCS-1B\n\n********Program Output********\n\n");
	
	int i, start, end;
	int counter1 = 0, counter2 = 0, counter3 = 0;
	printf("Enter Start of Range: ");
	scanf("%d",&start);
	printf("Enter End of Range: ");
	scanf("%d",&end);
	for(i = start; i<=end; i++){
		if(i%3==0){
			counter1 += 1;
		}
		if(i%5==0){
			counter2 += 1;
		}
		if(i%3==0 && i%5==0){
			counter3 += 1;
		}
	}
	printf("Fizz = %d\n", counter1);
	printf("Buzz = %d\n", counter2);
	printf("Fizz-Buzz = %d\n", counter3);
}

