#include <stdio.h>

int main(void) {
  int first;
  int second;

  if (((((scanf("%d %d", &first, &second) != 2) || (first < 1)) || (second < 1)) || (first > 100000)) || (second > 100000)) {
    return 1;
  }

  int a = first;
  int b = second;

  while (b != 0) {
    int remainder = a % b;
    a = b;
    b = remainder;
  }

  printf("GCD: %d\nLCM: %lld\n", a, ((long long) (first / a)) * second);

  return 0;
}
