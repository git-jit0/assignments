#include <stdio.h>

void concatenateStrings(char str1[], char str2[]) {
    int i, j;

    // Find the length of the first string
    for (i = 0; str1[i] != '\0'; i++);

    // Concatenate the second string to the end of the first string
    for (j = 0; str2[j] != '\0'; j++) {
        str1[i + j] = str2[j];
    }

    // Add null terminator to the end of the concatenated string
    str1[i + j] = '\0';
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    concatenateStrings(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}