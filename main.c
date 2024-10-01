#include <stdio.h>
#include <stdlib.h>

/*
Escreva um procedimento que receba 3 notas de um aluno por parâmetro e uma letra. Se a
letra for "A", o procedimento calcula e escreve a média aritmética das notas do aluno, se for
"P", calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Escreva também um programa
main que leia 3 notas de n alunos e acione o procedimento para cada aluno.
*/

/*
Descrição: O procedimento tem por objetivo dar a escolha ao usuário de escolher se ele quer
a média aritmética ou a média ponderada das notas
Entrada: n1, n2, n3 (ponto flutuante)
Saida: ponto flutuante
*/
void Opcao (float n1, float n2, float n3){

    float media_aritmetica, media_ponderada;
    char opcao;

    printf("Digite a opcao desejada:\n");
    printf("A - media aritmetica\n");
    printf("P - media ponderada\n");
    fflush(stdin);
    opcao = getchar();

    switch(opcao){
      case 'A':
        media_aritmetica = (n1 + n2 + n3)/3;
        printf("A media aritmetica eh: %.2f", media_aritmetica);
        break;
      case 'P':
        media_ponderada = (5*n1 + 3*n2 + 2*n3)/10;
        printf("A media ponderade eh: %.2f", media_ponderada);
        break;
      default:
        printf("Opcao invalida");
        break;
    }
}


int main()
{
    float nota1, nota2, nota3;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    Opcao(nota1, nota2, nota3);

}
