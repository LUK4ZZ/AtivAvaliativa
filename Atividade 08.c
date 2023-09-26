#include <stdio.h>

int main() {


    int contador = 0;
    double salario, totalSalario = 0.0;
    int numFilhos, totalFilhos = 0;
    double maiorSalario = -1.0;
    int pessoasAte100 = 0;

    do {
       
        printf("Digite o salário (ou um valor negativo para encerrar): ");
        scanf("%lf", &salario);

        if (salario >= 0.0) {
          
            totalSalario += salario;
            contador++;

          
            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

           
            printf("Digite o número de filhos: ");
            scanf("%d", &numFilhos);
            
           
            totalFilhos += numFilhos;

           
            if (salario <= 100.0) {
                pessoasAte100++;
            }
        }
    } while (salario >= 0.0);

    if (contador > 0) {
       
        double mediaSalario = totalSalario / contador;
        
       
        double mediaFilhos = (double)totalFilhos / contador;
        
       
        double percentualAte100 = (double)pessoasAte100 / contador * 100.0;

        printf("\nResultados:\n");
        printf("a) Média do salário da população: %.2lf\n", mediaSalario);
        printf("b) Média do número de filhos: %.2lf\n", mediaFilhos);
        printf("c) Maior salário: %.2lf\n", maiorSalario);
        printf("d) Percentual de pessoas com salário até R$100,00: %.2lf%%\n", percentualAte100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

}
