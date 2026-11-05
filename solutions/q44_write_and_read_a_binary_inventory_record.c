#include <stdio.h>

typedef struct {
  int product_id;
  double price;
  int stock;
} inventory_item;

int main(void) {
  inventory_item item;
  inventory_item restored;

  if (((scanf("%d %lf %d", &item.product_id, &item.price, &item.stock) != 3) || (item.price < 0)) || (item.stock < 0)) {
    return 1;
  }

  FILE *output_file = fopen("inventory.bin", "wb");

  if (output_file == NULL) {
    perror("inventory.bin");

    return 1;
  }

  int write_ok = fwrite(&item, sizeof(item), 1, output_file) == 1;

  if ((fclose(output_file) != 0) || (!write_ok)) {
    return 1;
  }

  FILE *input_file = fopen("inventory.bin", "rb");

  if (input_file == NULL) {
    return 1;
  }

  int read_ok = fread(&restored, sizeof(restored), 1, input_file) == 1;

  if ((fclose(input_file) != 0) || (!read_ok)) {
    return 1;
  }

  printf("ID=%d Price=%.2f Stock=%d\n", restored.product_id, restored.price, restored.stock);

  return 0;
}
