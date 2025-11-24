/********************************************
 Problem: Calculate power without pow()
 ********************************************/
#include<stdio.h>
int main(){
    int base, exponent;
    long long result = 1;
    int i;
    
    printf("Enter Base: ");
    scanf("%d", &base);
    printf("Enter Exponent: ");
    scanf("%d", &exponent);
    
    int temp = base;
    
    for(i = 0; i < exponent; i++) {
        result = result * temp;
    }
    
    printf("%d^%d = %lld\n", base, exponent, result);
    return 0;
}
