#include <stdio.h>

int main() {
    double x, y;

    // Solicita ao usuário que insira as coordenadas do ponto
    printf("Digite as coordenadas do ponto (x): ");
    scanf("%lf", &x);

    printf("Digite as coordenadas do ponto (y): ");
    scanf("%lf", &y);


    if (x == 0.0 && y == 0.0) {
        printf("Origem\n");
    } else if (x == 0.0) {
        printf("Eixo Y\n");
    } else if (y == 0.0) {
        printf("Eixo X\n");
    } else if (x > 0.0 && y > 0.0) {
        printf("Quadrante 1\n");
    } else if (x < 0.0 && y > 0.0) {
        printf("Quadrante 2\n");
    } else if (x < 0.0 && y < 0.0) {
        printf("Quadrante 3\n");
    } else if (x > 0.0 && y < 0.0) {
        printf("Quadrante 4\n");
    }

}
