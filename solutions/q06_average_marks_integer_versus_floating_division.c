#include <stdio.h>

int main(void) {
  int mark_a;
  int mark_b;
  int mark_c;

  if (scanf("%d %d %d", &mark_a, &mark_b, &mark_c) != 3) {
    return 1;
  }

  if ((((((mark_a < 0) || (mark_a > 100)) || (mark_b < 0)) || (mark_b > 100)) || (mark_c < 0)) || (mark_c > 100)) {
    return 1;
  }

  int total = (mark_a + mark_b) + mark_c;

  printf("Integer average: %d\n", total / 3);
  printf("Real average: %.2f\n", ((double) total) / 3);

  return 0;
}
