#include <stdio.h>

int main(void) {
  int number;

  if (((scanf("%d", &number) != 1) || (number < 0)) || (number > 999999)) {
    return 1;
  }

  int digits = 0;
  int temp = number;

  do {
    digits++;
    temp /= 10;
  }
  while (temp > 0);
  temp = number;
  long long total = 0;

  do {
    int digit = temp % 10;
    long long power = 1;

    for (int count = 0; count < digits; count++) {
      power *= digit;
    }

    total += power;
    temp /= 10;
  }
  while (temp > 0);
  printf("Digits: %d\n", digits);
  puts((total == number) ? ("Armstrong") : ("Not Armstrong"));

  return 0;
}
