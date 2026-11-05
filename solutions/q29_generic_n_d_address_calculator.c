#include <stdio.h>

int main(void) {
  int dimensions;
  unsigned long long lengths[8];
  unsigned long long indices[8];
  unsigned long long base;
  unsigned long long width;

  if (((scanf("%d", &dimensions) != 1) || (dimensions < 1)) || (dimensions > 8)) {
    return 1;
  }

  for (int axis = 0; axis < dimensions; axis++) {
    if ((scanf("%llu", &lengths[axis]) != 1) || (lengths[axis] == 0)) {
      return 1;
    }
  }

  for (int axis = 0; axis < dimensions; axis++) {
    if ((scanf("%llu", &indices[axis]) != 1) || (indices[axis] >= lengths[axis])) {
      return 1;
    }
  }

  if ((scanf("%llu %llu", &base, &width) != 2) || (width == 0)) {
    return 1;
  }

  unsigned long long row_offset = 0;
  unsigned long long column_offset = 0;

  for (int axis = 0; axis < dimensions; axis++) {
    row_offset = (row_offset * lengths[axis]) + indices[axis];
  }

  for (int axis = dimensions - 1; axis >= 0; axis--) {
    column_offset = (column_offset * lengths[axis]) + indices[axis];
  }

  printf("Row-major address: %llu\n", base + (row_offset * width));
  printf("Column-major address: %llu\n", base + (column_offset * width));

  return 0;
}
