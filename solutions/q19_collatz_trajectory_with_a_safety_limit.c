#include <stdio.h>

int main(void) {
  long long number;

  if (((scanf("%lld", &number) != 1) || (number < 1)) || (number > 10000)) {
    return 1;
  }

  int steps = 0;

  while (steps < 1000) {
    if (number == 1) {
      break;
    }

    number = ((number % 2) == 0) ? (number / 2) : ((3 * number) + 1);
    steps++;
  }

  printf("Steps: %d\nEnd value: %lld\n", steps, number);

  return 0;
}
