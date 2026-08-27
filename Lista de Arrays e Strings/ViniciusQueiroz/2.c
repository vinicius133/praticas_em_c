#include <stdio.h>

int main(){

    char vetor[20], frequente;
    int quantidade = 0, contagem[20] = {0}, frequencia = 0;
    
    
    printf("Digite o vetor de 20 caracteres: \n");
    for (int i = 0; i < 20; i++) {
        printf("Vetor[%d]: ", i + 1);
        scanf(" %c", &vetor[i]);
    }

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (vetor[i] == vetor[j]) {
                contagem[i]++;
            }
        }
    }

    for (int i = 0; i < 20; i++) {
        if(contagem[i] > frequencia){
            frequencia = contagem[i];
            frequente = vetor[i];
        }
    }

    printf("%c %d\n", frequente, frequencia);

    return 0;
}