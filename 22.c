//Write a program to find profit or loss percentage given cost price and selling price
#include <stdio.h>

int main(void) {
    double cp, sp;
    printf("Enter selling price and Cost price");
    scanf("%lf %lf", &sp, &cp);
 
    if (cp <= 0.0) {
        printf("Error: cost price must be positive\n");
        return 1;
    }

    if (sp > cp) {
        double profit = sp - cp;
        double pct = (profit / cp) * 100.0;
        printf("Profit: %.2f%%\n", pct);
    } else if (sp < cp) {
        double loss = cp - sp;
        double pct = (loss / cp) * 100.0;
        printf("Loss: %.2f%%\n", pct);
    } else {
        printf("No profit, no loss (0.00%%)\n");
    }

    return 0;
}
