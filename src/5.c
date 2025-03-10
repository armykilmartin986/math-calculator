#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float num1, num2;
    char operation;
    printf("Enter two numbers and an operation (+, -, *, /): ");
    scanf("%f %c %f", &num1, &operation, &num2);
    if (operation == '+') {
        printf("%.1f\n", num1 + num2);
    } else if (operation == '-') {
        printf("%.1f\n", num1 - num2);
    } else if (operation == '*') {
        printf("%.1f\n", num1 * num2);
    } else if (operation == '/') {
        if (num2 != 0) {
            printf("%.1f\n", num1 / num2);
        } else {
            printf("Error: division by zero is undefined.\n");
        }
    } else {
        printf("Invalid operation. Please try again.\n");
    }
    return 0;
}
