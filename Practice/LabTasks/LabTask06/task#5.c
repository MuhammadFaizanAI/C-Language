#include<stdio.h>
int main(){
	printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection: BCS-1B\n\n********Program Output********\n\n");
	
	int i,cold=0,mild=0,hot=0;
	int daily_temp[7] = {15,28,35,30,12,25,40};
	for(i=0;i<7;i++){
		if(daily_temp[i]<=20){
			cold++;
		}
		else if(daily_temp[i]>20 && daily_temp[i]<35){
			mild++;
		}
		else{
			hot++;
		}
	}
	printf("Total Cold Day %d \n", cold);
	printf("Total Mild Day %d \n", mild);
	printf("Total Hot Day %d \n", hot);
	
}
