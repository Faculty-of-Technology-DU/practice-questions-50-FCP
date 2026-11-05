#include <stdio.h>

typedef struct {
  char flag;
  int count;
  double measurement;
} packed_as_structure;

typedef union {
  char flag;
  int count;
  double measurement;
} shared_as_union;

int main(void) {
  packed_as_structure structure_array[5];
  shared_as_union union_array[5];
  printf("char: %zu\nint: %zu\ndouble: %zu\n", sizeof(char), sizeof(int), sizeof(double));
  printf("Structure: %zu\nUnion: %zu\n", sizeof(packed_as_structure), sizeof(shared_as_union));
  printf("Array of 5 structures: %zu\nArray of 5 unions: %zu\n", sizeof(structure_array), sizeof(union_array));
  printf("Structure member offsets: %zu %zu %zu\n", (size_t) (((char *) (&structure_array[0].flag)) - ((char *) (&structure_array[0]))), (size_t) (((char *) (&structure_array[0].count)) - ((char *) (&structure_array[0]))), (size_t) (((char *) (&structure_array[0].measurement)) - ((char *) (&structure_array[0]))));

  return 0;
}
