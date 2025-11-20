#include <stdio.h>
int main() {
    printf("Name: Muhammad Faizan\nRoll No: 25P-0585\nSection:BCS-1B\n\n********Program Output********\n\n");
    /**Program**/
    int x, y, i, j;
    printf("Number of Branches: ");
    scanf("%d", &x);
    printf("Number of Company Mobile Phones in Each Branch: ");
    scanf("%d", &y);
    int mobileBills[x][y];
    for(i = 0; i < x; i++) {
        for(j = 0; j < y; j++) {
            printf("mobileBills[%d][%d]: ", i, j);
            scanf("%d", &mobileBills[i][j]);
        }
    }
    int totalBill = 0;
    int branchTotal = 0;
    int maxMobileBill = mobileBills[0][0];
    int maxMobileBranch = 0, maxMobileID = 0;
    int maxBranchTotal = 0;
    int maxBranchID = 0;
    for(i = 0; i < x; i++) {
        branchTotal = 0;
        printf("Total Bill for Branch X%d: ", i);

        for(j = 0; j < y; j++) {
            totalBill += mobileBills[i][j];
            branchTotal += mobileBills[i][j];
            if(mobileBills[i][j] > maxMobileBill) {
                maxMobileBill = mobileBills[i][j];
                maxMobileBranch = i;
                maxMobileID = j;
            }
        }
        if(branchTotal > maxBranchTotal) {
            maxBranchTotal = branchTotal;
            maxBranchID = i;
        }
        printf("%d\n", branchTotal);
    }
    printf("\nTotal Bill: %d\n", totalBill);
    printf("Branch with Maximum Total Bill: X%d = %d\n", maxBranchID, maxBranchTotal);
    printf("Highest Individual Mobile Bill: %d (Branch X%d, Mobile Y%d)\n",
           maxMobileBill, maxMobileBranch, maxMobileID);

    return 0;
}
