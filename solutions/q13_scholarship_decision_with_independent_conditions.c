#include <stdio.h>

int main(void) {
  double attendance;
  double score;

  double income;

  if ((((((scanf("%lf %lf %lf", &attendance, &score, &income) != 3) || (attendance < 0)) || (attendance > 100)) || (score < 0)) || (score > 100)) || (income < 0)) {
    return 1;
  }

  if (((attendance >= 75) && (score >= 85)) && (income <= 300000)) {
    puts("Eligible");
  }
  else {
    if (attendance < 75) {
      puts("Attendance below 75");
    }

    if (score < 85) {
      puts("Score below 85");
    }

    if (income > 300000) {
      puts("Income above 300000");
    }
  }

  return 0;
}
