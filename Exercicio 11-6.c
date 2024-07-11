/*11.6 Ler 2 valores, calcular e
escrever a soma dos números inteiros existentes entre eles(incluindo os 2 valores lidos na soma).*/

#include <stdio.h>

int main() {
  int n1 = 0, n2 = 0, soma = 0;

  printf("Valor 1: \n");
  scanf("%d", &n1);

  printf("Valor 2: \n");
  scanf("%d", &n2);
  if (n1 < n2) {
    for (int i = n1; i <= n2; i++) {
      soma += i;
    }
  } else {
    for (int i = n2; i <= n1; i++) {
      soma += i;
    }
  }
  printf("Soma entre os inteiros dos 2 números, incluindo eles mesmos: %d",
         soma);
}