// math-calculator.c

#include <stdio.h>

int main() {
  int num1 = 0;
  int num2 = 0;
  char op = ' ';

  printf("Enter two numbers and an operation (+, -, *, /): ");
  scanf("%d %c %d", &num1, &op, &num2);

  if (op == '+') {
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
  } else if (op == '-') {
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
  } else if (op == '*') {
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
  } else if (op == '/') {
    if (num2 != 0) {
      printf("%d / %d = %d\n", num1, num2, num1 / num2);
    } else {
      printf("Error: division by zero is undefined.\n");
    }
  } else {
    printf("Invalid operation. Try again.\n");
  }

  return 0;
}
