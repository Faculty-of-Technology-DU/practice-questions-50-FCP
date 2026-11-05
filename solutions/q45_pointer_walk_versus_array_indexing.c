#include <stdio.h>

int main(void) {
  int values[5];

  for (int index = 0; index < 5; index++) {
    if (scanf("%d", &values[index]) != 1) {
      return 1;
    }
  }

  int *pointer = values;
  long long index_sum = 0;
  long long pointer_sum = 0;

  for (int index = 0; index < 5; index++) {
    printf("index=%d indexed=%d dereferenced=%d\n", index, values[index], *(pointer + index));
    index_sum += values[index];
    pointer_sum += *(pointer + index);
  }

  printf("Sums: %lld %lld\n", index_sum, pointer_sum);
  printf("Array bytes: %zu\nPointer bytes: %zu\n", sizeof(values), sizeof(pointer));

  return 0;
}
