#include <stdio.h>
#include <ctype.h>

int main() {
    char inputChar;
    char convertedChar;

    printf("Enter a character: ");
    scanf("%c", &inputChar);

    
    if (isupper(inputChar)) {
        convertedChar = tolower(inputChar);
        printf("Converted to lowercase: %c\n", convertedChar);
    }
    
    else if (islower(inputChar)) {
        convertedChar = toupper(inputChar);
        printf("Converted to uppercase: %c\n", convertedChar);
    }
    
    else {
        printf("Character entered is not a letter: %c\n", inputChar);
    }

    return 0;
}
