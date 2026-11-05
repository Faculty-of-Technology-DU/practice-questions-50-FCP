#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char phrase[200];

  if (fgets(phrase, sizeof(phrase), stdin) == NULL) {
    return 1;
  }

  int left = 0;
  int right = ((int) strlen(phrase)) - 1;
  int palindrome = 1;

  while (left < right) {
    while ((left < right) && (!isalnum((unsigned char) phrase[left]))) {
      left++;
    }
    while ((left < right) && (!isalnum((unsigned char) phrase[right]))) {
      right--;
    }

    if (tolower((unsigned char) phrase[left]) != tolower((unsigned char) phrase[right])) {
      palindrome = 0;
      break;
    }

    left++;
    right--;
  }

  puts((palindrome) ? ("Palindrome") : ("Not palindrome"));

  return 0;
}
