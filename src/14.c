int main() {
    float num1 = 0;
    float num2 = 0;
    char op = '+';
    float result = 0;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num1 / num2;
    }

    printf("Result: %f\n", result);

    return 0;
}
