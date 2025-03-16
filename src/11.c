#include <stdio.h>
#include <stdlib.h>

int main() {
  float num1, num2, result;
  char op;

  printf("Enter two numbers: ");
  scanf("%f %c", &num1, &op);

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
        printf("Error: can't divide by zero\n");
        return 1;
      }
      result = num1 / num2;
      break;
    default:
      printf("Invalid operator.\n");
      return 1;
  }

  printf("%.1f %c %.1f = %.1f\n", num1, op, num2, result);

  return 0;
}
