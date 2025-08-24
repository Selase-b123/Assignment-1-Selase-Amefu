#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float costPrice, sellingPrice, profit, loss;

    // Input cost price and selling price
    printf("Enter the Cost Price of the item: ");
    scanf("%f", &costPrice);

    printf("Enter the Selling Price of the item: ");
    scanf("%f", &sellingPrice);

    // Check profit or loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("The seller made a PROFIT of %.2f\n", profit);
    } 
    else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        printf("The seller incurred a LOSS of %.2f\n", loss);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
