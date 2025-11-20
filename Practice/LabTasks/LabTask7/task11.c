#include<stdio.h>
int main(){
    printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection:BCS-1B\n\n********Program Output********\n\n");
    /**Program**/
    
    int n, i, j, k, l, max;
    printf("Enter size of n x n matrix: ");
    scanf("%d", &n);
    
    int grid[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("grid[%d][%d]: ", i, j);
            scanf("%d", &grid[i][j]);
        }
    }
    
    int maxLocal[n-2][n-2];
    
    for(i = 0; i < n-2; i++){
        for(j = 0; j < n-2; j++){
            max = grid[i][j];
            for(k = i; k < i+3; k++){
                for(l = j; l < j+3; l++){
                    if(grid[k][l] > max){
                        max = grid[k][l];
                    }
                }
            }
            maxLocal[i][j] = max;
        }
    }
    
    printf("\nMaxLocal Matrix:\n");
    for(i = 0; i < n-2; i++){
        for(j = 0; j < n-2; j++){
            printf("%d ", maxLocal[i][j]);
        }
        printf("\n");
    }
}
