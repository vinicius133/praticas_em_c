#include <stdio.h>

int main(){
    char frase[100];
    int inicio = 0;

    printf("Digite a frase: ");
    fgets(frase, 100, stdin);

    for (int i = 0; ; i++) {
        if (frase[i] == ' ' || frase[i] == '\n' || frase[i] == '\0') {
            for (int j = i - 1; j >= inicio; j--) {
                printf("%c", frase[j]);
            }

            if (frase[i] == ' ') {
                printf(" ");
            } else {
                return 0; 
            }
            
            inicio = i + 1;
        }
    }

    return 0;
}