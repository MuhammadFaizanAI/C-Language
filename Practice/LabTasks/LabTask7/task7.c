#include<stdio.h>
int main(){
    printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection:BCS-1B\n\n********Program Output********\n\n");
    /**Program**/
    int ma, na, mb, nb, i, j, k;
    
    printf("\t----Matrix A----\n");
    printf("Enter the rows and column: ");
    scanf("%d %d", &ma, &na);
    int A[ma][na];
    for(i = 0; i < ma; i++){
        for(j = 0; j < na; j++){
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("\t----Matrix B----\n");
    printf("Enter the rows and column: ");
    scanf("%d %d", &mb, &nb);
    
    if(na != mb){
        printf("Matrix multiplication not possible!\n");
        return 1;
    }
    
    int B[mb][nb];
    for(i = 0; i < mb; i++){
        for(j = 0; j < nb; j++){
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    int C[ma][nb];
    for(i = 0; i < ma; i++){
        for(j = 0; j < nb; j++){
            C[i][j] = 0;
            for(k = 0; k < na; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    printf("\t---Result---\n");
    for(i = 0; i < ma; i++){
        for(j = 0; j < nb; j++){
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
}
