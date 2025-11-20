#include<stdio.h>
int main(){
    printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection:BCS-1B\n\n********Program Output********\n\n");
    /**Program**/
    
    int n,i,j,ctr;
    printf("\nEnter Size of Array: ");
    scanf("%d",&n);
    int array[n],visited[n];

    for(i=0;i<n;i++){
        printf("array[%d]: ",i);
        scanf("%d",&array[i]);
        visited[i] = 0;
    }
    
    for(i=0;i<n;i++){
        ctr = 0;    
        if(visited[i] == 1){
            continue;
        }
        for(j=0;j<n;j++){
            if(array[i]==array[j]){
                ctr++;
                visited[j] = 1;
            }
        }
        printf("Frequency of %d = %d\n", array[i], ctr);
    }
}