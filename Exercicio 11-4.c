/*11.4 Ler o número de alunos existentes em uma turma, ler as notas destes alunos, e calcular a média
aritmética destas notas.*/

#include <stdio.h>

int main() {
  int quantAlunos = 0;
  float nota = 0, notaTotal = 0;

  printf("Quantidade de alunos: \n");
  scanf("%d", &quantAlunos);

  for(int i = 0; i < quantAlunos; i++){
    printf("Digite a nota do aluno %d: ", i+1);
    scanf("%f", &nota);
    notaTotal += nota;
  }
  
  printf("Média da turma: %f", notaTotal/quantAlunos);

}