#include <stdio.h>

int main(void) {
  int code;

  if (((scanf("%d", &code) != 1) || (code < 1000)) || (code > 9999)) {
    return 1;
  }

  int thousands = code / 1000;
  int hundreds = (code / 100) % 10;
  int tens = (code / 10) % 10;
  int units = code % 10;

  printf("Digits: %d %d %d %d\nSum: %d\n", thousands, hundreds, tens, units, ((thousands + hundreds) + tens) + units);

  return 0;
}
