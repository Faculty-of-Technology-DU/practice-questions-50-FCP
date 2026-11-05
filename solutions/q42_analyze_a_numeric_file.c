#include <stdio.h>

int main(void) {
  FILE *input_file = fopen("numbers.txt", "r");

  if (input_file == NULL) {
    perror("numbers.txt");

    return 1;
  }

  double value;

  double minimum = 0.0;

  double maximum = 0.0;

  double sum = 0.0;
  int count = 0;
  int status;

  while ((status = fscanf(input_file, "%lf", &value)) == 1) {
    if ((count == 0) || (value < minimum)) {
      minimum = value;
    }

    if ((count == 0) || (value > maximum)) {
      maximum = value;
    }

    sum += value;
    count++;
  }

  if ((((status != EOF) || ferror(input_file)) || (fclose(input_file) != 0)) || (count == 0)) {
    puts("File empty or contains invalid data");

    return 1;
  }

  printf("Count: %d\nMin: %.3f\nMax: %.3f\nMean: %.3f\n", count, minimum, maximum, sum / count);

  return 0;
}
