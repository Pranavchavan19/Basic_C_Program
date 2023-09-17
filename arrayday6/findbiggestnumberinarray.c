#include <stdio.h>

int main() {
    int arr[] = {12, 45, 78, 34, 56, 90, 23};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    
    // Initialize a variable to store the maximum value
    int max = arr[0];
    
    // Find the maximum element in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }
    
    printf("The largest element in the array is: %d\n", max);
    
    return 0;
}
