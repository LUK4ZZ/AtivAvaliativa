#include <stdio.h>

int main() {


    double A, B, C;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

  
    if (A + B > C && A + C > B && B + C > A) {
   

        if (A == B && B == C) {
            printf("Os valores formam um triângulo equilátero.\n");
        } else if (A != B && B != C && A != C) {
            printf("Os valores formam um triângulo escaleno.\n");
        } else {
            printf("Os valores formam um triângulo isósceles.\n");
        }
    } else {
        printf("Os valores NÃO formam um triângulo.\n");
    }

}
