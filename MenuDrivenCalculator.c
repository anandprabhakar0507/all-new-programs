#include <stdio.h>
void main() {
  int num1, num2, opt;
  printf("Enter the first Integer :");
  scanf("%d", &num1);
  printf("Enter the second Integer:");
  scanf("%d", &num2);

  printf("\nThe available operator are :\n");
  printf(" 1-Addition.\n 2-Subtraction.\n 3-Multiplication.\n 4-Division.\n "
         "5-Exit.\n");
  printf("Enter the option:");
  scanf("%d", &opt);
  switch (opt) {
  case 1:
    printf("The Addition of  %d and %d is: %d\n", num1, num2, num1 + num2);
    break;

  case 2:
    printf("The Subtraction of %d  and %d is: %d\n", num1, num2, num1 - num2);
    break;

  case 3:
    printf("The Multiplication of %d  and %d is: %d\n", num1, num2,
           num1 * num2);
    break;

  case 4:
    if (num2 == 0) {
      printf("The second integer is zero. Divide by zero.\n");
    } else {
      printf("The Division of %d  and %d is : %d\n", num1, num2, num1 / num2);
    }
    break;

  case 5:
    break;

  default:
    printf("Input correct option\n");
    break;
  }
}
