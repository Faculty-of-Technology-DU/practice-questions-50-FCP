
#include <stdio.h>

int main(void) {
    unsigned int permissions;

    const unsigned int read_mask = 1u << 0;
    const unsigned int write_mask = 1u << 1;
    const unsigned int execute_mask = 1u << 2;

    if ((scanf("%u", &permissions) != 1) || (permissions > 7u)) {
        return 1;
    }

    printf("Initial permissions: %u\n", permissions);

    printf("Read: %u\n", (permissions & read_mask) >> 0);
    printf("Write: %u\n", (permissions & write_mask) >> 1);
    printf("Execute: %u\n", (permissions & execute_mask) >> 2);

    permissions |= write_mask;

    // Note that the permission bit order is XWR and not RWX

    printf("After enabling write: %u\n", permissions);

    permissions ^= execute_mask;

    printf("After toggling execute: %u\n", permissions);

    return 0;
}
