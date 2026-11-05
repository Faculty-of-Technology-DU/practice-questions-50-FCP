#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *input_file = fopen("source.txt", "r");

  if (input_file == NULL) {
    perror("source.txt");

    return 1;
  }

  FILE *output_file = fopen("numbered.txt", "w");

  if (output_file == NULL) {
    perror("numbered.txt");
    fclose(input_file);

    return 1;
  }

  char line[201];
  int number = 0;
  int success = 1;

  while (fgets(line, sizeof(line), input_file) != NULL) {
    size_t length = strlen(line);

    if (((length > 0) && (line[length - 1] != '\n')) && (!feof(input_file))) {
      int next_character = fgetc(input_file);

      if (next_character != EOF) {
        success = 0;
        break;
      }
    }

    number++;

    if (fprintf(output_file, "%d: %s", number, line) < 0) {
      success = 0;
      break;
    }
  }

  if (ferror(input_file)) {
    success = 0;
  }

  if (fclose(input_file) != 0) {
    success = 0;
  }

  if (fclose(output_file) != 0) {
    success = 0;
  }

  if (!success) {
    puts("Read/write failed or line too long");

    return 1;
  }

  printf("Numbered %d lines\n", number);

  return 0;
}
