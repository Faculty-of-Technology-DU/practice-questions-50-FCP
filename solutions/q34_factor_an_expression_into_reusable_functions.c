#include <stdio.h>

long long square(int value) {
  return ((long long) value) * value;
}

long long sum_of_squares(int x, int y) {
  return square(x) + square(y);
}

int main(void) {
  int x;
  int y;

  if (((((scanf("%d %d", &x, &y) != 2) || (x < (-10000))) || (x > 10000)) || (y < (-10000))) || (y > 10000)) {
    return 1;
  }

  printf("Squared distance: %lld\n", sum_of_squares(x, y));

  return 0;
}
