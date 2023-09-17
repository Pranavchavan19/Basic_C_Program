#include <stdio.h>
#include <string.h>

int main() {
    char sourceString[100], destinationString[100];

    printf("Enter a string: ");
    gets(sourceString);

    // Copy sourceString into destinationString
    strcpy(destinationString, sourceString);

    printf("Source string: %s\n", sourceString);
    printf("Copied string: %s\n", destinationString);

    return 0;
}
