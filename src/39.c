#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sum: %.2f\n", a + b);
    printf("Difference: %.2f\n", a - b);
    printf("Product: %.2f\n", a * b);
    printf("Quotient: %.2f\n", a / b);

    return 0;
}
