#include <stdio.h>

int main() {
    char nomes[5][50];
    int posicoes[5];

    printf("Digite os 5 jogadores:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%s %d", &nomes[i], &posicoes[i]);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (posicoes[i] > posicoes[j]) {
                int temp_pos = posicoes[i];
                posicoes[i] = posicoes[j];
                posicoes[j] = temp_pos;

                for (int k = 0; k < 50; k++) {
                    char temp_char = nomes[i][k];
                    nomes[i][k] = nomes[j][k];
                    nomes[j][k] = temp_char;
                }
            }
        }
    }

    printf("\nSaida:\n\"");
    for (int i = 0; i < 5; i++) {
        printf("%s ", nomes[i]);

        if (posicoes[i] == 1 || posicoes[i] == 2) {
            printf("armador");
        } else if (posicoes[i] == 3 || posicoes[i] == 4) {
            printf("ala");
        } else if (posicoes[i] == 5) {
            printf("pivo");
        }

        if (i < 4) {
            printf(", ");
        }
    }
    printf("\"\n");

    return 0;
}