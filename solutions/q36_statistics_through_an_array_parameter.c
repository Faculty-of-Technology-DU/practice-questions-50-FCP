#include <stdio.h>

double compute_mean(const double values[], int count) {
  double total = 0.0;

  for (int index = 0; index < count; index++) {
    total += values[index];
  }

  return total / count;
}

double compute_variance(const double values[], int count, double mean) {
  double sum = 0.0;

  for (int index = 0; index < count; index++) {
    double deviation = values[index] - mean;
    sum += deviation * deviation;
  }

  return sum / count;
}

int main(void) {
  double values[100];
  int count;

  if (((scanf("%d", &count) != 1) || (count < 1)) || (count > 100)) {
    return 1;
  }

  for (int index = 0; index < count; index++) {
    if (scanf("%lf", &values[index]) != 1) {
      return 1;
    }
  }

  double mean = compute_mean(values, count);

  printf("Mean: %.4f\nVariance: %.4f\n", mean, compute_variance(values, count, mean));

  return 0;
}
