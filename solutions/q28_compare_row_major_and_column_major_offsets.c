#include <stdio.h>

int main(void) {
  unsigned long long rows;
  unsigned long long columns;
  unsigned long long row;
  unsigned long long column;
  unsigned long long width;

  if (((((((((scanf("%llu %llu %llu %llu %llu", &rows, &columns, &row, &column, &width) != 5) || (rows < 1)) || (columns < 1)) || (width < 1)) || (rows > 100000)) || (columns > 100000)) || (width > 1000)) || (row >= rows)) || (column >= columns)) {
    return 1;
  }

  unsigned long long row_major = ((row * columns) + column) * width;
  unsigned long long column_major = ((column * rows) + row) * width;

  printf("Row-major offset: %llu bytes\n", row_major);
  printf("Column-major offset: %llu bytes\n", column_major);

  return 0;
}
