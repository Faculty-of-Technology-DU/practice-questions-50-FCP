#include <stdio.h>

int main(void) {
  int elapsed_seconds;

  if (((scanf("%d", &elapsed_seconds) != 1) || (elapsed_seconds < 0)) || (elapsed_seconds >= 86400)) {
    return 1;
  }

  int hours = elapsed_seconds / 3600;
  int minutes = (elapsed_seconds % 3600) / 60;
  int seconds = elapsed_seconds % 60;

  printf("%02d:%02d:%02d\n", hours, minutes, seconds);

  return 0;
}
