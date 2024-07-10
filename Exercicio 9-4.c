#include <stdio.h>

int main() {

  int sen = 2009, ten = 0, i = 0;

  while (ten != sen) {
    printf("Digite a senha: ");
    scanf("%d", &ten);
    i++;
    if (ten != sen) {

      printf("ACESSO NEGADO\n");
    } else {

      printf("ACESSO PERMITIDO\n");
    }
  }
}