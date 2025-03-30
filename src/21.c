#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        for (int i = 1; i <= num1 - num2; i++) {
            printf("*");
        }
        printf("\n");
        for (int i = 0; i < num2; i++) {
            printf("++*");
        }
    } else if (num1 == num2) {
        printf("%d == %d\n", num1, num2);
    } else {
        for (int i = 1; i <= num2 - num1; i++) {
            printf("*");
        }
        printf("\n");
        for (int i = 0; i < num1; i++) {
            printf("++*");
        }
    }

    return 0;
}
