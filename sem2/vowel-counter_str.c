#include <stdio.h>
#include <ctype.h>

int countVowels(const char *str) {
    int count = 0;

    while (*str != '\0') {
        char c = tolower(*str); // Convert character to lowercase for case-insensitive comparison
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int vowelCount = countVowels(str);
    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}