#include <stdio.h>

int main() {
    int codigoVoto;
    int votosCandidatos[4] = {0}; 
    int votosNulos = 0;
    int votosEmBranco = 0;

    printf("Digite o código do candidato (1 a 4) ou 5 para voto nulo, 6 para voto em branco, ou 0 para encerrar: ");

    while (1) {
        scanf("%d", &codigoVoto);

        if (codigoVoto == 0) {
            break; 
        }

        switch (codigoVoto) {
            case 1:
            case 2:
            case 3:
            case 4:
                votosCandidatos[codigoVoto - 1]++; 
                break;
            case 5:
                votosNulos++; 
                break;
            case 6:
                votosEmBranco++; 
                break;
            default:
                printf("Código de voto inválido. Tente novamente.\n");
        }

        printf("Digite o próximo código de voto ou 0 para encerrar: ");
    }

    printf("\nResultados da eleição:\n");
    printf("Votos para o Candidato 1: %d\n", votosCandidatos[0]);
    printf("Votos para o Candidato 2: %d\n", votosCandidatos[1]);
    printf("Votos para o Candidato 3: %d\n", votosCandidatos[2]);
    printf("Votos para o Candidato 4: %d\n", votosCandidatos[3]);
    printf("Votos Nulos: %d\n", votosNulos);
    printf("Votos em Branco: %d\n", votosEmBranco);

    return 0;
}
