#include <stdio.h>

int binary_search(const int values[], int left, int right, int target) {
  if (left > right) {
    return -1;
  }

  int middle = left + ((right - left) / 2);

  if (values[middle] == target) {
    return middle;
  }

  if (target < values[middle]) {
    return binary_search(values, left, middle - 1, target);
  }

  return binary_search(values, middle + 1, right, target);
}

int main(void) {
  int size;
  int values[100];
  int target;

  if (((scanf("%d", &size) != 1) || (size < 1)) || (size > 100)) {
    return 1;
  }

  for (int index = 0; index < size; index++) {
    if (scanf("%d", &values[index]) != 1) {
      return 1;
    }

    if ((index > 0) && (values[index] < values[index - 1])) {
      return 1;
    }
  }

  if (scanf("%d", &target) != 1) {
    return 1;
  }

  printf("Index: %d\n", binary_search(values, 0, size - 1, target));

  return 0;
}
