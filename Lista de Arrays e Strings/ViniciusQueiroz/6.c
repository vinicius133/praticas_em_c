#include <stdio.h>

int main(){
    char matriz[3][5], matriz_t[5][3];

    printf("Digite os caracteres da matriz:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            printf("Caractere[%d][%d]: ",i + 1, j + 1);
            scanf(" %c", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            matriz_t[i][j] = matriz[j][i];
        }
    }

    printf("Matriz transposta:\n");
    for (int i = 0; i < 5; i++){
        printf("\n");
        for (int j = 0; j < 3; j++){
            printf("%c ", matriz_t[i][j]);
        }
    }
    

    return 0;
}