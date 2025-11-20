#include<stdio.h>
int main(){
	int i=2, j = 2, num1, num2, factor = 1;
	printf("Enter the Number1: ");
	scanf("%d",&num1);
	printf("Enter the Number2: ");
	scanf("%d", &num2);
	while(i<=num1){
		if(num1%i==0){
			printf("%d ", i);
			num1 = num1/i;
		}
		else{
			i++;
		}
    }
    printf("\n");
    while(j<=num2){
		if(num2%j==0){
			printf("%d ", j);
			num2 = num2/j;
		}
		else{
			j++;
		}
    }
    

}
