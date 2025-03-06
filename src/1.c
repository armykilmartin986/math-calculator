#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1 = 5;
    int num2 = 8;
    float result;

    // Addition
    result = num1 + num2;
    printf("Addition: %d\n", result);

    // Subtraction
    result = num1 - num2;
    printf("Subtraction: %d\n", result);

    // Multiplication
    result = num1 * num2;
    printf("Multiplication: %d\n", result);

    // Division
    if (num2 != 0) {
        result = num1 / num2;
        printf("Division: %f\n", result);
    } else {
        printf("Division by zero not allowed!\n");
    }

    return 0;
}