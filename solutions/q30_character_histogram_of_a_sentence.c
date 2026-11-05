#include <stdio.h>
#include <ctype.h>

int main(void) {
  char line[200];

  if (fgets(line, sizeof(line), stdin) == NULL) {
    return 1;
  }

  int vowels = 0;
  int consonants = 0;
  int digits = 0;
  int spaces = 0;
  int other = 0;

  for (int index = 0; line[index] != '\0'; index++) {
    unsigned char letter = (unsigned char) line[index];
    int lower = tolower(letter);

    if (((((lower == 'a') || (lower == 'e')) || (lower == 'i')) || (lower == 'o')) || (lower == 'u')) {
      vowels++;
    }
    else {
      if (isalpha(letter)) {
        consonants++;
      }
      else {
        if (isdigit(letter)) {
          digits++;
        }
        else {
          if (isspace(letter)) {
            spaces++;
          }
          else {
            other++;
          }
        }
      }
    }
  }

  printf("Vowels=%d Consonants=%d Digits=%d Whitespace=%d Other=%d\n", vowels, consonants, digits, spaces, other);

  return 0;
}
