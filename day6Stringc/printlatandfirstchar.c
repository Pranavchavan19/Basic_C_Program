#include <stdio.h>


int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str); // Read a string from the user
    
    int length = 0;
    
    // Calculate the length of the string using a loop
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    
    if (length > 0) {
        printf("First character: %c\n", str[0]);
        printf("Last character: %c\n", str[length - 1]);
    } else {
        printf("The string is empty.\n");
    }
    
  
   
    return 0;
}
