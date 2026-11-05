#include <stdio.h>

int main(void) {
  int rows;
  int columns;
  int matrix[10][10];

  if (((((scanf("%d %d", &rows, &columns) != 2) || (rows < 1)) || (rows > 10)) || (columns < 1)) || (columns > 10)) {
    return 1;
  }

  for (int row = 0; row < rows; row++) {
    for (int column = 0; column < columns; column++) {
      if (scanf("%d", &matrix[row][column]) != 1) {
        return 1;
      }
    }
  }

  for (int row = 0; row < rows; row++) {
    long long total = 0;

    for (int column = 0; column < columns; column++) {
      total += matrix[row][column];
    }

    printf("Row %d: %lld\n", row, total);
  }

  for (int column = 0; column < columns; column++) {
    long long total = 0;

    for (int row = 0; row < rows; row++) {
      total += matrix[row][column];
    }

    printf("Column %d: %lld\n", column, total);
  }

  return 0;
}
