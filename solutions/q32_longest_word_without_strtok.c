#include <stdio.h>
#include <ctype.h>

int main(void) {
  char sentence[200];

  if (fgets(sentence, sizeof(sentence), stdin) == NULL) {
    return 1;
  }

  int current = 0;
  int longest = 0;
  int word_count = 0;

  for (int index = 0;; index++) {
    unsigned char letter = (unsigned char) sentence[index];

    if (isalpha(letter)) {
      current++;
    }
    else {
      if (current > 0) {
        word_count++;
      }

      if (current > longest) {
        longest = current;
      }

      current = 0;
    }

    if (letter == '\0') {
      break;
    }
  }

  printf("Words: %d\nLongest length: %d\n", word_count, longest);

  return 0;
}
