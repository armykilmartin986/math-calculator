#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2;
    char operation;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, (double)(num1 + num2));
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, (double)(num1 - num2));
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, (double)(num1 * num2));
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, (double)(num1 / num2));
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation. Please try again.\n");
    }

    return 0;
}
