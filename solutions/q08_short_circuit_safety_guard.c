#include <stdio.h>

int main(void) {
  int numerator;
  int denominator;

  if (scanf("%d %d", &numerator, &denominator) != 2) {
    return 1;
  }

  if ((denominator != 0) && (printf("Quotient: %.3f\n", ((double) numerator) / denominator) > 0)) {
    return 0;
  }

  if (denominator == 0) {
    printf("Division undefined: zero denominator\n");
  }

  return 0;
}
