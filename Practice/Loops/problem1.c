/********************************************
 Problem: Print numbers from 1 to 100
 ********************************************/

#include<stdio.h>

int main(){
	int i = 1;
	printf("Even Numbers Between 1-100\n");
	
	while(i<=100){
		if(i % 2 == 0)
			printf("%d\n",i);
		i++;
	}
}
