#include <stdio.h>

int main(void) {
  int size;
  int values[100];
  int item;

  if (((scanf("%d", &size) != 1) || (size < 0)) || (size > 99)) {
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

  if (scanf("%d", &item) != 1) {
    return 1;
  }

  int position = size;

  while ((position > 0) && (values[position - 1] > item)) {
    values[position] = values[position - 1];
    position--;
  }

  values[position] = item;

  for (int index = 0; index <= size; index++) {
    printf("%d%c", values[index], (index == size) ? ('\n') : (' '));
  }

  return 0;
}
