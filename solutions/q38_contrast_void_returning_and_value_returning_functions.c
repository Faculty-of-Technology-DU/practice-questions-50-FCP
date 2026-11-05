#include <stdio.h>

int divide_checked(double numerator, double denominator, double *result) {
  if ((result == NULL) || (denominator == 0.0)) {
    return 0;
  }

  *result = numerator / denominator;

  return 1;
}

void print_quotient(double quotient) {
  printf("Quotient: %.4f\n", quotient);
}

int main(void) {
  double numerator;
  double denominator;

  double quotient;

  if (scanf("%lf %lf", &numerator, &denominator) != 2) {
    return 1;
  }

  if (divide_checked(numerator, denominator, &quotient)) {
    print_quotient(quotient);
  }
  else {
    puts("Cannot divide by zero");
  }

  return 0;
}
