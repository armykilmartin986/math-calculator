// A basic math calculator app that can perform basic arithmetic operations
#include <stdio.h>

int main() {
  // Ask user for input
  printf("Enter a number: ");
  int num1;
  scanf("%d", &num1);

  // Ask user for operator (+, -, *, /)
  char op;
  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &op);

  // Ask user for second number
  int num2;
  printf("Enter a second number: ");
  scanf("%d", &num2);

  // Calculate result of operation
  int result = 0;
  if (op == '+') {
    result = num1 + num2;
  } else if (op == '-') {
    result = num1 - num2;
  } else if (op == '*') {
    result = num1 * num2;
  } else if (op == '/') {
    result = num1 / num2;
  }

  // Print result to user
  printf("The result is: %d\n", result);

  return 0;
}
