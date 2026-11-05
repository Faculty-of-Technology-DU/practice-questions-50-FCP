#include <stdio.h>

int main(void) {
  int count;

  double rainfall[100];

  if (((scanf("%d", &count) != 1) || (count < 1)) || (count > 100)) {
    return 1;
  }

  double total = 0.0;
  int max_index = 0;

  for (int index = 0; index < count; index++) {
    if ((scanf("%lf", &rainfall[index]) != 1) || (rainfall[index] < 0)) {
      return 1;
    }

    total += rainfall[index];

    if (rainfall[index] > rainfall[max_index]) {
      max_index = index;
    }
  }

  double mean = total / count;
  int above_mean = 0;

  for (int index = 0; index < count; index++) {
    if (rainfall[index] > mean) {
      above_mean++;
    }
  }

  printf("Mean: %.2f\nAbove mean: %d\nFirst max index: %d\n", mean, above_mean, max_index);

  return 0;
}
