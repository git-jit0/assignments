#include <stdio.h>

int main() {
    int array[100], n, i;
    int sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("The sum of elements in the array is: %d\n", sum);

    return 0;
}