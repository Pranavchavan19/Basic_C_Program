#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];

    printf("Enter the first string: ");
   gets(string1);
 
    printf("Enter the second string: ");
    gets(string2);

    int result = strcmp(string1, string2);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically smaller than the second string.\n");
    } else {
        printf("The first string is lexicographically larger than the second string.\n");
    }

    return 0;
}
