#include <stdio.h>
#include <stdlib.h>

// MODELO DE EXEMPLO

int main() {
    // Variaveis que podem ser usadas
    int x;
    int y;
    int z;
    int k;
    int w;
    int j;
    int i;
    // #########################

    // AREA DE CODIGO DO ALUNO
    z = 0;
    printf("Digite numeros entre 0 e 31: \nDigite -1 para encerrar\n\n");
    do {
        y = 0;
        scanf("%d", &x);
        if (x >= 0 && x <= 31) {
            y = 1 << x;
            z = z | y;
        }
    } while (x != -1);
    printf("____________________________\nResultados em ordem crescente\n");
    while (y <= 31) {
        if ((z >> y) & 1) {
            printf("%d\n", y);
        }
        y++;
    }
    // #########################
    return 0;
}