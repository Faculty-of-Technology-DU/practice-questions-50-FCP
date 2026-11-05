#include <stdio.h>

int main(void) {
  int month;
  int year;

  if ((scanf("%d %d", &month, &year) != 2) || (year < 1)) {
    return 1;
  }

  int days;

  switch (month) {
    case 4:
    case 6:
    case 9:
    case 11:
      days = 30;
      break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      days = 31;
      break;
    case 2:
      days = 28 + (((year % 400) == 0) || (((year % 4) == 0) && ((year % 100) != 0)));
      break;
    default:
      puts("Invalid month");

      return 0;
  }

  printf("Days: %d\n", days);

  return 0;
}
