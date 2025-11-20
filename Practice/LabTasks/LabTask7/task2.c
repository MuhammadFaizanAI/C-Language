#include<stdio.h>
int main(){
    printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection:BCS-1B\n\n********Program Output********\n\n");
    /**Program**/
    int n, d, i, j, temp;
    printf("Enter size of Array: ");
    scanf("%d", &n);
    printf("Enter d: ");
    scanf("%d", &d);
    
    d = d % n;
    
    int array[n];
    for(i = 0; i < n; i++){
        printf("Enter array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    printf("\tOriginal Array\n");
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    
    for(i = 0, j = d-1; i < j; i++, j--){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    
    for(i = d, j = n-1; i < j; i++, j--){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    
    for(i = 0, j = n-1; i < j; i++, j--){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    
    printf("\n\tAfter Rotation\n");
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
