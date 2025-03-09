#include <stdio.h>
#include <stdlib.h>

int main() {
    int number1, number2;
    char op;
    double result;

    printf("Enter two numbers: ");
    scanf("%d %c", &number1, &op);

    if (op == '+') {
        result = number1 + number2;
    } else if (op == '-') {
        result = number1 - number2;
    } else if (op == '*') {
        result = number1 * number2;
    } else if (op == '/') {
        result = number1 / number2;
    } else {
        printf("Invalid operator\n");
        return 0;
    }

    printf("%d %c %d = %lf\n", number1, op, number2, result);

    return 0;
}
