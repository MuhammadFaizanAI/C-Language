#include<stdio.h>
int main(){
    printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection:BCS-1B\n\n********Program Output********\n\n");
    /**Program**/
    int n, i, j, temp;
    printf("Enter Size of Array: ");
    scanf("%d", &n);
    int array[n];
    for(i = 0; i < n; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    // Bubble sort with corrected bounds
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    printf("Sorted Array: ");
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
