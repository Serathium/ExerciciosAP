/*11.3 Ler 10 valores, calcular e escrever a média aritmética destes valores.*/

#include <stdio.h>

int main() {
  float num = 0,num2 = 0;

  for (int i = 0; i < 10; i++) {
    printf("Digite um número: \n");
    scanf("%f", &num2);
    num += num2;
    }
  
  printf("Média: %f\n", num/10.0);
}