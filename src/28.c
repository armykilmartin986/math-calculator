#include <stdio.h>

int main() {
    int num1, num2, operation;

    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
    }

    return 0;
}
