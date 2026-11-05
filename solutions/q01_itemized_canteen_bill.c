#include <stdio.h>

int main(void) {
  double price_a;
  double price_b;

  double price_c;
  int quantity_a;
  int quantity_b;
  int quantity_c;

  if (scanf("%lf %d %lf %d %lf %d", &price_a, &quantity_a, &price_b, &quantity_b, &price_c, &quantity_c) != 6) {
    return 1;
  }

  double total_a = price_a * quantity_a;

  double total_b = price_b * quantity_b;

  double total_c = price_c * quantity_c;

  double subtotal = (total_a + total_b) + total_c;

  double tax = subtotal * 0.05;

  printf("A: %.2f\nB: %.2f\nC: %.2f\n", total_a, total_b, total_c);
  printf("Subtotal: %.2f\nTax: %.2f\nPayable: %.2f\n", subtotal, tax, subtotal + tax);

  return 0;
}
