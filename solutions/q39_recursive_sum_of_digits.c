#include <stdio.h>

int digit_sum(int number) {
  if (number < 10) {
    return number;
  }

  return (number % 10) + digit_sum(number / 10);
}

int main(void) {
  int number;

  if (((scanf("%d", &number) != 1) || (number < 0)) || (number > 1000000000)) {
    return 1;
  }

  printf("Digit sum: %d\n", digit_sum(number));

  return 0;
}
