#include <stdio.h>

int fibonacci(int n) {
    // Base cases: Fibonacci of 0 is 0 and Fibonacci of 1 is 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    // Recursive case: Fibonacci of n is the sum of Fibonacci of (n-1) and Fibonacci of (n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check if the value of n is non-negative
    if (n < 0) {
        printf("Fibonacci sequence is not defined for negative numbers.\n");
    } else {
        int result = fibonacci(n);
        printf("The %dth Fibonacci number is: %d\n", n, result);
    }

    return 0;
}