#include <stdio.h>
#include <math.h>

int main() {


    double x1, y1, x2, y2;
    
 
    printf("Digite as coordenadas do ponto p1 (x1): ");
    scanf("%lf", &x1);
    
    printf("Digite as coordenadas do ponto p1 (y1): ");
    scanf("%lf", &y1);

    printf("Digite as coordenadas do ponto p2 (x2): ");
    scanf("%lf", &x2);
    
    printf("Digite as coordenadas do ponto p2 (y2): ");
    scanf("%lf", &y2);
  
    double distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    
    printf("A distância entre os pontos p1 e p2 é: %.4lf\n", distancia);
    
}
