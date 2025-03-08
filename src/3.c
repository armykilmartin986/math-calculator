// This is a simple calculator program that takes two numbers as input and performs addition, subtraction, multiplication, or division on them.
#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2;
    char operation;

    // Ask user for input
    printf("Enter two numbers: ");
    scanf("%d %c", &num1, &operation);

    // Perform the requested operation
    if (operation == '+') {
        int result = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, result);
    } else if (operation == '-') {
        int result = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, result);
    } else if (operation == '*') {
        int result = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, result);
    } else if (operation == '/') {
        int result = num1 / num2;
        printf("%d / %d = %d\n", num1, num2, result);
    } else {
        printf("Invalid operation. Try again.\n");
    }

    return 0;
}