/********************************************
 Problem: LCM
 ********************************************/
#include<stdio.h>
int main(){
	int a = 0;
	int b = 0;
	int temp = 0;
	
	printf("Enter Numbers: ");
	scanf("%d %d",&a,&b);
	int x = a;
	int y = b;
		while(b != 0){
		temp = b;
		b = a % b;
		a = temp;
		}
		
	int lcm = (x * y) / a;
	printf("LCM = %d\n", lcm);
	
	return 0;
}
