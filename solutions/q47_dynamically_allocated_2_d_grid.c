#include <stdio.h>
#include <stdlib.h>

int main(void) {
  size_t rows;
  size_t columns;

  if (((((scanf("%zu %zu", &rows, &columns) != 2) || (rows < 1)) || (rows > 20)) || (columns < 1)) || (columns > 20)) {
    return 1;
  }

  int *grid = malloc((rows * columns) * (sizeof(*grid)));

  if (grid == NULL) {
    return 1;
  }

  for (size_t row = 0; row < rows; row++) {
    for (size_t column = 0; column < columns; column++) {
      if (scanf("%d", &grid[(row * columns) + column]) != 1) {
        free(grid);

        return 1;
      }
    }
  }

  long long diagonal_sum = 0;

  for (size_t index = 0; (index < rows) && (index < columns); index++) {
    diagonal_sum += grid[(index * columns) + index];
  }

  printf("Diagonal sum: %lld\n", diagonal_sum);
  free(grid);

  return 0;
}
