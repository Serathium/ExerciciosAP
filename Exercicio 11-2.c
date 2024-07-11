/*11.2 Ler 10 valores e contar quantos estão no intervalo [10,20] e quantos
deles estão fora deste intervalo. Escrever o resultado das duas contagens.*/

#include <stdio.h>

int main() {
  float num = 0;
  int cont = 0;

  for (int i = 0; i < 10; i++) {
    printf("Digite um número: \n");
    scanf("%f", &num);
    if (num >= 10 && num <= 20) {
      cont++;
    }
  }
  printf("Quantidade de valores dentro do intervalo: %d\n", cont);
  printf("Quantidade de valores fora do intervalo: %d", 10 - cont);
}