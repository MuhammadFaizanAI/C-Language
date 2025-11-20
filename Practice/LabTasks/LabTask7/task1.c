#include<stdio.h>
int main(){
    printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection:BCS-1B\n\n********Program Output********\n\n");
    /**Program**/
    int dividend,divisor,remainder;
    int quotient = 0;
    printf("Enter the Dividend: ");
    scanf("%d",&dividend);
    printf("Enter the Divisor: ");
    scanf("%d",&divisor);
    while(1){
        dividend = dividend-divisor;
        quotient++;
        if(dividend < divisor){;
            remainder = dividend;
            break;
        }
    }
    printf("Quotient = %d and Remainder = %d\n",quotient,remainder);

}