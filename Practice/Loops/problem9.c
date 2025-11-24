/********************************************
 Problem:  Print multiplication table
 ********************************************/

#include<stdio.h>
int main(){
	
	int i = 0;
	int number = 0;
	
	printf("Enter Number: ");
	if(scanf("%d",&number) != 1){
		printf("Invalid Input\n");
		return 1;
	}
	
	while(i<=10){
		printf("%d\tX\t%d\t=\t%d\n",number,i,number*i);
		i++;
	}
		
	return 0;
	
}
