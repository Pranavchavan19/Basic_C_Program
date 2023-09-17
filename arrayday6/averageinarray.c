#include <stdio.h>

int main() {
    int marks[5]; // Declare an array to store marks for five subjects
    int total = 0;
    float average;

    // Input marks for five subjects
    printf("Enter marks for five subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i]; // Add each subject's marks to the total
    }

    // Calculate the average
    average = (float)total / 5;

    // Print the total and average
    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}
