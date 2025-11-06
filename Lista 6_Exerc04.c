#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;
    int soma = 0;


    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

   
    for (i = 0; i < 5; i++) {
        soma += matriz[i][i];
    }

   
    printf("\nA soma dos elementos da diagonal principal é: %d\n", soma);

    return 0;
}

