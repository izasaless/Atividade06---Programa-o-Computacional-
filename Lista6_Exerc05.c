#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool ehPrimo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int matriz[5][5];
    bool todosPrimos = true;

    // Leitura dos elementos da matriz 5x5
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            // Verificar se elemento não é primo
            if (!ehPrimo(matriz[i][j])) {
                todosPrimos = false;
            }
        }
    }

    // Resultado
    if (todosPrimos) {
        printf("Todos os elementos da matriz são números primos.\n");
    } else {
        printf("Nem todos os elementos da matriz são números primos.\n");
    }

    return 0;
}
