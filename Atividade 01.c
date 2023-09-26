#include <stdio.h>

int main() {

    
    double x, resultado;


    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    resultado = (5 * x + 3) / (x * x - 16);

    printf("f(x) = %lf\n", resultado);

}
