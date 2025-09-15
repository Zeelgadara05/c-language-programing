#include <stdio.h>

int main() {
    int n = 4;  // height of the upper half (A to D)

    // Upper half including middle
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }

        // Left side characters
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        // Right side characters
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int s = 0; s < n - i; s++) {
            printf(" ");
        }

        // Left side characters
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }

        // Right side characters
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}
