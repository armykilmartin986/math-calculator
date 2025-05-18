#include <stdio.h>

int main() {
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (num1 > 0 && num2 > 0) {
        result = num1 + num2;
        printf("Sum of %f and %f is %f\n", num1, num2, result);
    } else if (num1 == 0 && num2 < 0) {
        printf("Division by zero not allowed.\n");
    } else {
        printf("Invalid inputs.\n");
    }

    return 0;
}
