#include<stdio.h>
int main(){
    printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection:BCS-1B\n\n********Program Output********\n\n");
    /**Program**/
    
    int n, S, i, j, current_sum;
    printf("Enter size of Array: ");
    scanf("%d", &n);
    printf("Enter Number S: ");
    scanf("%d", &S);
    
    int array[n];
    for(i = 0; i < n; i++){
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    int found = 0;
    for(i = 0; i < n; i++){
        current_sum = 0;
        for(j = i; j < n; j++){
            current_sum += array[j];
            if(current_sum == S){
                printf("The Elements from Index %d to %d when summed results in the output of %d.\n", i, j, S);
                found = 1;
                break;
            }
            if(current_sum > S) break;
        }
        if(found) break;
    }
    
    if(!found){
        printf("No subarray found with sum %d\n", S);
    }
}
