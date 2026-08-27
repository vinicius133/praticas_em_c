#include <stdio.h>

int main(){
    char paragrafo[500];

    printf("Digite o paragrafo: ");
    fgets(paragrafo, 500, stdin);

    for (int i = 0; paragrafo[i] != '\0'; i++){
        printf("%c", paragrafo[i]);
        if (paragrafo[i] == '.') {
            printf("\n\n");

            if (paragrafo[i + 1] == ' ') {
                i++;
            }
        }
    }

    return 0;
}