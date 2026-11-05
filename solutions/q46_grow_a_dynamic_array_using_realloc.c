#include <stdio.h>
#include <stdlib.h>

int main(void) {
  size_t initial;
  size_t extra;

  if (((scanf("%zu", &initial) != 1) || (initial < 1)) || (initial > 100)) {
    return 1;
  }

  int *values = malloc(initial * (sizeof(*values)));

  if (values == NULL) {
    return 1;
  }

  for (size_t index = 0; index < initial; index++) {
    if (scanf("%d", &values[index]) != 1) {
      free(values);

      return 1;
    }
  }

  if ((scanf("%zu", &extra) != 1) || (extra > 100)) {
    free(values);

    return 1;
  }

  if (extra > 0) {
    int *resized = realloc(values, (initial + extra) * (sizeof(*values)));

    if (resized == NULL) {
      free(values);

      return 1;
    }

    values = resized;
  }

  long long sum = 0;

  for (size_t index = 0; index < (initial + extra); index++) {
    if ((index >= initial) && (scanf("%d", &values[index]) != 1)) {
      free(values);

      return 1;
    }

    sum += values[index];
  }

  printf("Elements: %zu\nSum: %lld\n", initial + extra, sum);
  free(values);

  return 0;
}
