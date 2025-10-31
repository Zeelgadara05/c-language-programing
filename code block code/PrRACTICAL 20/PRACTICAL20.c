#include <stdio.h>

int main() {
    int N;
    printf("Enter total number of participants (N): ");
    scanf("%d", &N);

    int sum = N * (N + 1) / 2;  // Sum of first N natural numbers
    int attendedSum = 0;
    int id;

    printf("Enter the %d attended participant IDs:\n", N - 1);
    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &id);
        attendedSum += id;
    }

    int missingID = sum - attendedSum;
    printf("The missing participant ID is: %d\n", missingID);

    return 0;
}
