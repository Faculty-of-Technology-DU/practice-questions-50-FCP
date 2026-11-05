#include <stdio.h>

int main(void) {
  int count_a = 0;
  int count_b = 0;
  int count_c = 0;
  int count_d = 0;
  int count_f = 0;
  int invalid = 0;
  char grade;

  while (scanf(" %c", &grade) == 1) {
    if (grade == '#') {
      break;
    }

    switch (grade) {
      case 'A':
        count_a++;
        break;
      case 'B':
        count_b++;
        break;
      case 'C':
        count_c++;
        break;
      case 'D':
        count_d++;
        break;
      case 'F':
        count_f++;
        break;
      default:
        invalid++;
        break;
    }
  }

  printf("A=%d B=%d C=%d D=%d F=%d Invalid=%d\n", count_a, count_b, count_c, count_d, count_f, invalid);

  return 0;
}
