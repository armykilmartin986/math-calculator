#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    char operation;

    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
            printf("%d + %d = ", num1, num2);
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d - %d = ", num1, num2);
            printf("%d - %d = ", num1, num2);
            printf("%d\n", (num1 - num2));
            break;
        case '*':
            printf("%d * %d = ", num1, num2);
            printf("%d * %d = ", num1, num2);
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = ", num1, num2);
                printf("%d / %d = ", num1, num2);
                printf("%d\n", (num1 / num2));
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation. Please enter a valid operation (+, -, *, /).\n");
    }

    return 0;
}
