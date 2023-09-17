#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str); // Read a string from the user
    
    printf("Reversed string: ");
    
    int length = 0;
    
    // Calculate the length of the string using a loop
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
    // Print characters in reverse order
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    
    printf("\n");
    
    return 0;
}
