#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char *str) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        // Ignore non-alphanumeric characters from the left
        while (!isalnum(str[i]) && i < j) {
            i++;
        }
        // Ignore non-alphanumeric characters from the right
        while (!isalnum(str[j]) && i < j) {
            j--;
        }
        // If characters at i and j are not the same, return false
        if (tolower(str[i]) != tolower(str[j])) {
            return 0;
        }
        // Move to the next pair of characters
        i++;
        j--;
    }
    // If the loop completes without returning false, the string is a palindrome
    return 1;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character at the end of input
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    if (isPalindrome(str)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}