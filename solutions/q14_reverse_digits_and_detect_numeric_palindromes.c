#include <stdio.h>

int main(void) {
  int original;

  if (((scanf("%d", &original) != 1) || (original < 0)) || (original > 1000000000)) {
    return 1;
  }

  int remaining = original;
  long long reversed = 0;

  while (remaining > 0) {
    reversed = (reversed * 10) + (remaining % 10);
    remaining /= 10;
  }

  printf("Reversed: %lld\n", reversed);
  puts((reversed == original) ? ("Palindrome") : ("Not palindrome"));

  return 0;
}
