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

  int top = 0;
  int bottom = rows - 1;
  int left = 0;
  int right = columns - 1;

  while ((top <= bottom) && (left <= right)) {
    for (int column = left; column <= right; column++) {
      printf("%d ", matrix[top][column]);
    }

    top++;

    for (int row = top; row <= bottom; row++) {
      printf("%d ", matrix[row][right]);
    }

    right--;

    if (top <= bottom) {
      for (int column = right; column >= left; column--) {
        printf("%d ", matrix[bottom][column]);
      }

      bottom--;
    }

    if (left <= right) {
      for (int row = bottom; row >= top; row--) {
        printf("%d ", matrix[row][left]);
      }

      left++;
    }
  }

  putchar('\n');

  return 0;
}
