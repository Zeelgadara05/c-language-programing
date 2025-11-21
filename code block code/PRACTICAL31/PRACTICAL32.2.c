#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int i, n, marks;

    fp = fopen("marks.txt", "w");

    if (fp == NULL) {
        printf("Error: Could not create file.\n");
        exit(1);
    }

    printf("--- CHARUSAT Exam Dept: Data Entry ---\n");
    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter marks for Student %d: ", i);
        scanf("%d", &marks);
        putw(marks, fp);
    }

    fclose(fp);
    printf("\nMarks saved successfully to 'marks.txt'.\n");

    printf("\n--- CHARUSAT Exam Dept: Data Retrieval ---\n");

    fp = fopen("marks.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        exit(1);
    }

    printf("Stored Student Marks:\n");

    i = 1;
    while ((marks = getw(fp)) != EOF) {
        printf("Student %d: %d\n", i, marks);
        i++;
    }

    fclose(fp);

    return 0;
}
