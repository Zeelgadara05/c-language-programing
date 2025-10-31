#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of days: ");
    scanf("%d", &n);

    int prices[n];

    printf("Enter fruit prices for %d days:\n", n);
    for (i = 0; i < n; i++) {
        printf("Day %d price: ", i + 1);
        scanf("%d", &prices[i]);
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    // Traverse through the price list
    for (i = 1; i < n; i++) {
        // Check if selling today gives better profit
        int profit = prices[i] - minPrice;
        if (profit > maxProfit)
            maxProfit = profit;

        // Update the minimum price if current price is lower
        if (prices[i] < minPrice)
            minPrice = prices[i];
    }

    printf("\nMaximum Profit: %d\n", maxProfit);

    return 0;
}
