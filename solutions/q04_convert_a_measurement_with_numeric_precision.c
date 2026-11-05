#include <stdio.h>

int main(void) {
  double centimetres;

  if ((scanf("%lf", &centimetres) != 1) || (centimetres < 0.0)) {
    return 1;
  }

  double metres = centimetres / 100.0;

  printf("Metres: %.3f\nMillimetres: %.1f\nInches: %.3f\n", metres, centimetres * 10.0, centimetres / 2.54);
  printf("Whole metres: %d\n", (int) metres);

  return 0;
}
