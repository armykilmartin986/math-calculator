int main() {
    float num1 = 0;
    float num2 = 0;
    char op = '+';
    float result = 0;
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Division by zero error!\n");
            } else {
                result = num1 / num2;
            }
            break;
    }
    
    printf("Result: %f\n", result);
    
    return 0;
}
