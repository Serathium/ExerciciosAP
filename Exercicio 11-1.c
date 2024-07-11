#include <stdio.h>

int main() {
  float num = 0;
  int nega = 0;

  for (int i = 0; i < 10; i++) {
    printf("Digite um número: \n");
    scanf("%f", &num);
    if (num < 0) {
      nega++;
    }
  }
  printf("Quantidade de valores negativos: %d", nega);
}