#include <stdio.h>

int main(void) {
  int terms;

  if (((scanf("%d", &terms) != 1) || (terms < 1)) || (terms > 100000)) {
    return 1;
  }

  double sum = 0.0;

  for (int term = 1; term <= terms; term++) {
    double signed_term = (((term % 2) == 1) ? (1.0) : (-1.0)) / term;
    sum += signed_term;
  }

  printf("Sum: %.10f\n", sum);

  return 0;
}
