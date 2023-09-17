#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str); // Read a string from the user
    
    int length = 0;
    
    // Calculate the length of the string using a loop
    while (str[length] != '\0') {
        length++;
    }
    
    printf("Length of the string: %d\n", length);
    
    return 0;
}
