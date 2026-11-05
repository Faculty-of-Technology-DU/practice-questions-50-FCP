#include <stdio.h>

int reverse_range(int values[], int left, int right) {
  while (left < right) {
    int temp = values[left];
    values[left++] = values[right];
    values[right--] = temp;
  }

  return 0;
}

int main(void) {
  int size;
  int rotations;
  int values[100];

  if (((scanf("%d", &size) != 1) || (size < 1)) || (size > 100)) {
    return 1;
  }

  for (int index = 0; index < size; index++) {
    if (scanf("%d", &values[index]) != 1) {
      return 1;
    }
  }

  if ((scanf("%d", &rotations) != 1) || (rotations < 0)) {
    return 1;
  }

  rotations %= size;
  reverse_range(values, 0, size - 1);
  reverse_range(values, 0, rotations - 1);
  reverse_range(values, rotations, size - 1);

  for (int index = 0; index < size; index++) {
    printf("%d%c", values[index], ((index + 1) == size) ? ('\n') : (' '));
  }

  return 0;
}
