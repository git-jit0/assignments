#include <stdio.h>

double power(double base, int exponent) {
    // Base case: If the exponent is 0, return 1
    if (exponent == 0) {
        return 1;
    }
    // If the exponent is positive, recursively multiply base by power(base, exponent - 1)
    else if (exponent > 0) {
        return base * power(base, exponent - 1);
    }
    // If the exponent is negative, recursively compute power of (1/base) with positive exponent
    else {
        return power(base, exponent + 1) / base;
    }
}

int main() {
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("%.2f ^ %d = %.2f\n", base, exponent, result);

    return 0;
}