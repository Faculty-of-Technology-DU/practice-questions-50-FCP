#include <stdio.h>

unsigned long long hanoi(int disks, char source, char auxiliary, char target) {
  if (disks == 0) {
    return 0;
  }

  unsigned long long before = hanoi(disks - 1, source, target, auxiliary);

  printf("Move disk %d: %c -> %c\n", disks, source, target);
  unsigned long long after = hanoi(disks - 1, auxiliary, source, target);

  return (before + 1) + after;
}

int main(void) {
  int disks;

  if (((scanf("%d", &disks) != 1) || (disks < 1)) || (disks > 10)) {
    return 1;
  }

  printf("Moves: %llu\n", hanoi(disks, 'A', 'B', 'C'));

  return 0;
}
