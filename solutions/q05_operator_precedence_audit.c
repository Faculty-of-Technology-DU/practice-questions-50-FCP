#include <stdio.h>

int main(void) {
  int a;
  int b;
  int c;

  if ((scanf("%d %d %d", &a, &b, &c) != 3) || (c == 0)) {
    return 1;
  }

  printf("a + b * c = %d\n", a + (b * c));
  printf("(a + b) * c = %d\n", (a + b) * c);
  printf("a / c * b = %d\n", (a / c) * b);

  return 0;
}
