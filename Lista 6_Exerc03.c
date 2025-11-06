#include <stdio.h>

int main() {
    int l, c;
    int matriz[100][100];
    int i, j;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &l);

    printf("Digite a quantidade de colunas: ");
    scanf("%d", &c);

    if (l <= 0 || c <= 0 || l > 100 || c > 100) {
        printf("Valores invalidos! Use numeros entre 1 e 100.\n");
        return 1;
    }

  
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("Digite o elemento da linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

  
    printf("\nMatriz digitada:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

