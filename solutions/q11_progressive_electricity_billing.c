#include <stdio.h>

int main(void) {
  int units;

  if ((scanf("%d", &units) != 1) || (units < 0)) {
    return 1;
  }

  double bill;

  if (units <= 100) {
    bill = units * 2.0;
  }
  else {
    if (units <= 200) {
      bill = (100 * 2.0) + ((units - 100) * 3.0);
    }
    else {
      bill = ((100 * 2.0) + (100 * 3.0)) + ((units - 200) * 5.0);
    }
  }

  printf("Bill: %.2f\n", bill + 50.0);

  return 0;
}
