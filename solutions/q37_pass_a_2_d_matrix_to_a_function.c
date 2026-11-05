#include <stdio.h>

long long matrix_sum(int rows, int columns, int values[][5]) {
  long long total = 0;

  for (int row = 0; row < rows; row++) {
    for (int column = 0; column < columns; column++) {
      total += values[row][column];
    }
  }

  return total;
}

int main(void) {
  int matrix[5][5] = {{0}};
  int rows;
  int columns;

  if (((((scanf("%d %d", &rows, &columns) != 2) || (rows < 1)) || (rows > 5)) || (columns < 1)) || (columns > 5)) {
    return 1;
  }

  for (int row = 0; row < rows; row++) {
    for (int column = 0; column < columns; column++) {
      if (scanf("%d", &matrix[row][column]) != 1) {
        return 1;
      }
    }
  }

  printf("Sum: %lld\n", matrix_sum(rows, columns, matrix));

  return 0;
}
