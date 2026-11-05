#include <stdio.h>

int main(void) {
  int side_a;
  int side_b;
  int side_c;

  if (scanf("%d %d %d", &side_a, &side_b, &side_c) != 3) {
    return 1;
  }

  if ((((((side_a <= 0) || (side_b <= 0)) || (side_c <= 0)) || (side_a > 10000)) || (side_b > 10000)) || (side_c > 10000)) {
    return 1;
  }

  if ((((side_a + side_b) <= side_c) || ((side_a + side_c) <= side_b)) || ((side_b + side_c) <= side_a)) {
    puts("Not a triangle");
  }
  else {
    if ((side_a == side_b) && (side_b == side_c)) {
      puts("Equilateral");
    }
    else {
      if (((side_a == side_b) || (side_a == side_c)) || (side_b == side_c)) {
        puts("Isosceles");
      }
      else {
        puts("Scalene");
      }
    }
  }

  return 0;
}
