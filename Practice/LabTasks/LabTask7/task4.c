#include<stdio.h>
int main(){
    printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection:BCS-1B\n\n********Program Output********\n\n");
    /**Program**/
    int m, n, i, j;
    printf("\nEnter m and n of Matrix: ");
    scanf("%d %d", &m, &n);
    
    if(m != n){
        printf("Not a Symmetric\n");
        return 0;
    }
    
    int array[m][n];
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    int symmetric = 1;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(array[i][j] != array[j][i]){
                symmetric = 0;
                break;
            }
        }
        if(!symmetric) break;
    }
    
    if(symmetric){
        printf("\nSymmetric\n");
    } else {
        printf("\nNot a Symmetric\n");
    }
}
