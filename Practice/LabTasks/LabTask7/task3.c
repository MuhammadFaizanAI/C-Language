#include<stdio.h>
int main(){
    printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection:BCS-1B\n\n********Program Output********\n\n");
    /**Program**/
    
    int number,remainder,sum = 0,i;
    printf("Enter the Number: ");
    scanf("%d",&number);
    for(i=0;number != 0;i++){
        remainder = number % 10;
        number = number/10;
        sum += remainder;
    }
    printf("Sum = %d\n",sum); 

} 