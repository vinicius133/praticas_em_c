#include <stdio.h>
#include <math.h>

int main(){

    double vetor1[10], vetor2[10];
    double soma = 0, media, soma_quadrados = 0;

    printf("Digite os valores do vetor: \n");

    for(int i = 0; i < 10; i++){
        printf("\nVetor[%d]: ", i);
        scanf("%lf", &vetor1[i]);
    }

    //media
    for (int i = 0; i < 10; i++){
        soma += vetor1[i];
    }

    media = soma / 10;

    //desvio padrao
    for (int i = 0; i < 10; i++){
        vetor2[i] = vetor1[i] - media;
    }

    for (int i = 0; i < 10; i++){
        soma_quadrados += vetor2[i] * vetor2[i];
    }

    double desvio_padrao = sqrt(soma_quadrados / 10);

    printf("\nDesvio Padrao: %lf\n", desvio_padrao);

    return 0;
}