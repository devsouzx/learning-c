#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int sum = a + b;
    int diff = a - b;
    int prod = a * b;
    float quot = (float)a / b;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %.2f\n", quot);

    return 0;
}