#include <stdio.h>

typedef union {
  int count;
  double temperature;
  char status;
} sensor_value;

typedef struct {
  char type;
  sensor_value value;
} sensor_record;

int main(void) {
  sensor_record readings[30];
  int count;

  if (((scanf("%d", &count) != 1) || (count < 1)) || (count > 30)) {
    return 1;
  }

  for (int index = 0; index < count; index++) {
    if (scanf(" %c", &readings[index].type) != 1) {
      return 1;
    }

    switch (readings[index].type) {
      case 'I':
        if (scanf("%d", &readings[index].value.count) != 1) {
          return 1;
        }
        break;
      case 'F':
        if (scanf("%lf", &readings[index].value.temperature) != 1) {
          return 1;
        }
        break;
      case 'C':
        if (scanf(" %c", &readings[index].value.status) != 1) {
          return 1;
        }
        break;
      default:
        return 1;
    }
  }

  for (int index = 0; index < count; index++) {
    switch (readings[index].type) {
      case 'I':
        printf("Count: %d\n", readings[index].value.count);
        break;
      case 'F':
        printf("Temperature: %.2f\n", readings[index].value.temperature);
        break;
      case 'C':
        printf("Status: %c\n", readings[index].value.status);
        break;
    }
  }

  return 0;
}
