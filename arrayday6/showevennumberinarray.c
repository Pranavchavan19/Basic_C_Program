#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    printf("Even numbers in the array: ");

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]); // Print even numbers
        }
    }

    printf("\n");

    return 0;
}
