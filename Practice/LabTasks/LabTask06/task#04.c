#include<stdio.h>
int main(){
	printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection: BCS-1B\n\n********Program Output********\n\n");
	
	int a, b;
	printf("Enter Number A: ");
	scanf("%d",&a);
	printf("Enter Number B: ");
	scanf("%d",&b);
	while(a<b){
		if(a<=9){
			switch(a){
				case 1: printf("One,"); break;
				case 2: printf("Two,"); break;
				case 3: printf("Three,"); break;
				case 4: printf("Four,"); break;
				case 5: printf("Five,"); break;
				case 6: printf("Six,"); break;
				case 7: printf("Seven,"); break;
				case 8: printf("Eight,"); break;
				case 9: printf("Nine,"); break;
			}
		}
		        
		a++;
	}
	switch(a%2){
		case 0: 
			printf("Even\n");break;
		default: 
			printf("Odd\n");break;
	}
}

