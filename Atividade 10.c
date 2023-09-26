#include <stdio.h>
#include <string.h>

struct Cidade {
    int codigo;
    char estado[3];
    int numVeiculos;
    int numAcidentes;
};

int main() {
    struct Cidade cidades[200];
    int numCidades = 200;

    // Preencha o array 'cidades' com os dados fornecidos.

    // Suponha que você preencheu o array 'cidades' com os dados fornecidos.

   
    int maiorIndice = cidades[0].numAcidentes;
    int menorIndice = cidades[0].numAcidentes;
    int indiceMaiorCidade = 0;
    int indiceMenorCidade = 0;

    for (int i = 1; i < numCidades; i++) {
        if (cidades[i].numAcidentes > maiorIndice) {
            maiorIndice = cidades[i].numAcidentes;
            indiceMaiorCidade = i;
        }
        if (cidades[i].numAcidentes < menorIndice) {
            menorIndice = cidades[i].numAcidentes;
            indiceMenorCidade = i;
        }
    }

    printf("a) Maior índice de acidentes: %d na cidade %d, estado %s\n", maiorIndice, cidades[indiceMaiorCidade].codigo, cidades[indiceMaiorCidade].estado);
    printf("   Menor índice de acidentes: %d na cidade %d, estado %s\n", menorIndice, cidades[indiceMenorCidade].codigo, cidades[indiceMenorCidade].estado);

   
    int somaVeiculos = 0;
    for (int i = 0; i < numCidades; i++) {
        somaVeiculos += cidades[i].numVeiculos;
    }
    float mediaVeiculos = (float)somaVeiculos / numCidades;

    printf("b) Média de veículos nas cidades brasileiras: %.2f\n", mediaVeiculos);

    
    int somaAcidentesRS = 0;
    int numCidadesRS = 0;
    for (int i = 0; i < numCidades; i++) {
        if (strcmp(cidades[i].estado, "RS") == 0) {
            somaAcidentesRS += cidades[i].numAcidentes;
            numCidadesRS++;
        }
    }
    float mediaAcidentesRS = (float)somaAcidentesRS / numCidadesRS;

    printf("c) Média de acidentes com vítimas nas cidades do Rio Grande do Sul: %.2f\n", mediaAcidentesRS);

}
