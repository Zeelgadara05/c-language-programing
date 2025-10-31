#include <stdio.h>

int main() {
    int numbers[25];
    int i;
    int positiveCount = 0, negativeCount = 0;
    int evenCount = 0, oddCount = 0;

    printf("Enter 25 integers:\n");

    // Input 25 integers
    for (i = 0; i < 25; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Process each number
    for (i = 0; i < 25; i++) {
        // Count positive and negative numbers
        if (numbers[i] > 0)
            positiveCount++;
        else if (numbers[i] < 0)
            negativeCount++;

        // Count even and odd numbers
        if (numbers[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Display results
    printf("\n--- Data Statistics ---\n");
    printf("Total Positive Numbers: %d\n", positiveCount);
    printf("Total Negative Numbers: %d\n", negativeCount);
    printf("Total Even Numbers: %d\n", evenCount);
    printf("Total Odd Numbers: %d\n", oddCount);

    return 0;
}
