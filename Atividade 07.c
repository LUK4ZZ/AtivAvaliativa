#include <stdio.h>

int main() {


    int num_alunos = 30;
    double notas[num_alunos];
    double media_geral = 0.0;

    for (int i = 0; i < num_alunos; i++) {
        double n1, n2, n3;
        printf("Digite a primeira nota do aluno %d: ", i + 1);
        scanf("%lf", &n1);

        printf("Digite a segunda nota do aluno %d: ", i + 1);
        scanf("%lf", &n2);

        printf("Digite a terceira nota do aluno %d: ", i + 1);
        scanf("%lf", &n3);

        double media_ponderada = (n1 * 2 + n2 * 4 + n3 * 3) / 10;

      
        notas[i] = media_ponderada;

        
        media_geral += media_ponderada;

        
        if (media_ponderada >= 7.0) {
            printf("Aluno %d: Média Ponderada = %.2lf - Aprovado\n", i + 1, media_ponderada);
        } else {
            printf("Aluno %d: Média Ponderada = %.2lf - Reprovado\n", i + 1, media_ponderada);
        }
    }

  
    media_geral /= num_alunos;

    printf("Média Geral da Turma: %.2lf\n", media_geral);

}
