#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int sum = 0; // Initialize a variable to store the sum

    // Calculate the sum of elements in the array
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Add each element to the sum
    }

    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}
