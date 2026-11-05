#include <stdio.h>
#include <math.h>

int main(void) {
  double a;
  double b;

  double c;

  if ((scanf("%lf %lf %lf", &a, &b, &c) != 3) || (a == 0.0)) {
    return 1;
  }

  double discriminant = (b * b) - ((4.0 * a) * c);

  if (discriminant < 0.0) {
    puts("No real roots");
  }
  else {
    if (discriminant == 0.0) {
      printf("Repeated root: %.4f\n", (-b) / (2.0 * a));
    }
    else {
      double root = sqrt(discriminant);

      printf("Roots: %.4f %.4f\n", ((-b) + root) / (2.0 * a), ((-b) - root) / (2.0 * a));
    }
  }

  return 0;
}
