#include <stdio.h>

int main() {
    int n = 5;  // maximum number

    // Upper half including middle
    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int s = 0; s < n - i; s++) {
            printf("  ");
        }

        // Left side numbers
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        // Right side numbers
        for (int j = 2; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    // Lower half
    for (int i = 2; i <= n; i++) {
        // Print leading spaces
        for (int s = 0; s < n - i; s++) {
            printf("  ");
        }

        // Left side numbers
        for (int j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        // Right side numbers
        for (int j = 2; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
