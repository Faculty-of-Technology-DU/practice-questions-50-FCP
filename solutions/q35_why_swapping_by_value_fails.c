#include <stdio.h>

int swap_by_value(int first, int second) {
  int temporary = first;
  first = second;
  second = temporary;

  return first != second;
}

int swap_by_pointer(int *first, int *second) {
  if ((first == NULL) || (second == NULL)) {
    return 0;
  }

  int temporary = *first;
  *first = *second;
  *second = temporary;

  return 1;
}

int main(void) {
  int first;
  int second;

  if (scanf("%d %d", &first, &second) != 2) {
    return 1;
  }

  (void) swap_by_value(first, second);
  printf("After by-value call: %d %d\n", first, second);

  if (!swap_by_pointer(&first, &second)) {
    return 1;
  }

  printf("After pointer call: %d %d\n", first, second);

  return 0;
}
