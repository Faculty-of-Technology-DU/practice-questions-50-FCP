#include <stdio.h>

int main(void) {
  int number;

  if (((scanf("%d", &number) != 1) || (number < 2)) || (number > 1000000)) {
    return 1;
  }

  int prime = 1;

  for (int divisor = 2; divisor <= (number / divisor); divisor++) {
    if ((number % divisor) == 0) {
      prime = 0;
      break;
    }
  }

  puts((prime) ? ("Prime") : ("Composite"));

  return 0;
}
