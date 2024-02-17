#include <stdio.h>
#include <ctype.h>

void convertToUpperCase(char *str) {
    while (*str != '\0') {
        *str = toupper(*str); // Convert character to uppercase
        str++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    convertToUpperCase(str);

    printf("String in uppercase: %s\n", str);

    return 0;
}