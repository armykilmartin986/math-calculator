#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, result;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    result = sqrt(num1) + sqrt(num2);
    
    printf("Result: %.2f\n", result);
    
    return 0;
}
