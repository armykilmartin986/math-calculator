#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  // Declare variables
  int num1, num2;
  char op;
  double result;

  // Get input from user
  printf("Enter two numbers: ");
  scanf("%d %c", &num1, &op);
  scanf("%d", &num2);

  // Perform operation
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
      if (num2 != 0) {
        result = num1 / num2;
      } else {
        printf("Error: cannot divide by zero\n");
        return -1;
      }
      break;
    default:
      printf("Invalid operator\n");
      return -1;
  }

  // Print result
  printf("%d %c %d = %lf\n", num1, op, num2, result);

  return 0;
}
