#include <stdio.h>

int main(void) {
  int day;
  int month;
  int year;

  if (scanf("%d %d %d", &day, &month, &year) != 3) {
    return 1;
  }

  if ((((year < 1) || (year > 9999)) || (month < 1)) || (month > 12)) {
    puts("Invalid");

    return 0;
  }

  int month_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int leap_year = ((year % 400) == 0) || (((year % 4) == 0) && ((year % 100) != 0));

  if ((month == 2) && leap_year) {
    month_days[1] = 29;
  }

  puts(((day >= 1) && (day <= month_days[month - 1])) ? ("Valid") : ("Invalid"));

  return 0;
}
