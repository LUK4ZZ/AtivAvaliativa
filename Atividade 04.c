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
     
        double ASquare = A * A;
        double BSquare = B * B;
        double CSquare = C * C;

    
        if (ASquare + BSquare == CSquare || ASquare + CSquare == BSquare || BSquare + CSquare == ASquare) {
            printf("Os valores formam um triângulo retângulo.\n");

        } else if (ASquare + BSquare < CSquare || ASquare + CSquare > BSquare || BSquare + CSquare < ASquare) {
            printf("Os valores formam um triângulo obtusângulo.\n");

        } else {
            printf("Os valores formam um triângulo acutângulo.\n");
        }
        
    } else {
        printf("Os valores NÃO formam um triângulo.\n");
    }

    return 0;
}
