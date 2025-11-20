#include <stdio.h>

int main() {
	printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection: BCS-1B\n\n********Program Output********\n\n");
		
    int i;
    for (i = 0; i <= 6; i++) {
        if (i % 2 == 0){
            printf("%d\t%d\t%d\t%d\n", i, i, i, i);
        }
        else{
            printf("\t%d\t%d\n", i, i);
        }
    }
    return 0;
}

