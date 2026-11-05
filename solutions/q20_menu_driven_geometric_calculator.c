#include <stdio.h>

int main(void) {
  int choice;
  double a;

  double b;

  if (scanf("%d", &choice) != 1) {
    return 1;
  }

  switch (choice) {
    case 1:
      if ((scanf("%lf", &a) != 1) || (a < 0)) {
        return 1;
      }
      printf("Area: %.3f\n", a * a);
      break;
    case 2:
      if (((scanf("%lf %lf", &a, &b) != 2) || (a < 0)) || (b < 0)) {
        return 1;
      }
      printf("Area: %.3f\n", a * b);
      break;
    case 3:
      if ((scanf("%lf", &a) != 1) || (a < 0)) {
        return 1;
      }
      printf("Area: %.3f\n", (3.141592653589793 * a) * a);
      break;
    default:
      puts("Invalid choice");
      break;
  }

  return 0;
}
