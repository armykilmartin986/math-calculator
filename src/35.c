#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Addition result = %d\n", num1 + num2);
    printf("Subtraction result = %d\n", num1 - num2);
    printf("Multiplication result = %d\n", num1 * num2);
    printf("Division result = %d\n", num1 / num2);
    
    return 0;
}
