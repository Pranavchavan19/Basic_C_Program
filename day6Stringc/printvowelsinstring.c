#include <stdio.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    gets(str); // Read a string from the user
    
    printf("Vowels in the string: ");
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c ", ch);
        }
    }
    
    printf("\n");
    
    return 0;
}
