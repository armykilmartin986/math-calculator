#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1 = 0;
  int num2 = 0;
  char op = '+';
  int result = 0;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

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
        printf("Error: cannot divide by zero.\n");
        return 1;
      } else {
        result = num1 / num2;
      }
      break;
  }

  printf("%d\n", result);

  return 0;
}
