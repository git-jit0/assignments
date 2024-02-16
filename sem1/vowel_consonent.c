#include <stdio.h>

int main() {
    char alphabet;
    
    printf("Enter a alphabet to check if it is vowel or consonet: ");
    scanf("%c", &alphabet);
    
    switch (alphabet) {
        case 'a':
            printf("'%c' is a vowel",alphabet);
            break;
        case 'e':
            printf("'%c' is a vowel",alphabet);
            break;
        case 'i':
            printf("'%c' is a vowel",alphabet);
            break;
        case 'o':
            printf("'%c' is a vowel",alphabet);
            break;
        case 'u':
            printf("'%c' is a vowel",alphabet);
            break;
        case 'A':
            printf("'%c' is a vowel",alphabet);
            break;
        case 'E':
            printf("'%c' is a vowel",alphabet);
            break;
        case 'I':
            printf("'%c' is a vowel",alphabet);
            break;
        case 'O':
            printf("'%c' is a vowel",alphabet);
            break;
        case 'U':
            printf("'%c' is a vowel",alphabet);
            break;
        
        default:
           printf("'%c' is a consonant",alphabet);
            break;
    }
    
    return 0;
}
