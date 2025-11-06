
//ANA CLARA VASCONCELOS LIMA - 578769 - TURMA A


/*1. Escreva programas em C que declarem e inicializem um array de inteiros com N elementos
(N inteiro e maior do que 0 e menor do que 100, contendo os valores de 1 a N) e exiba os
valores na tela, sendo um por linha, e em forma de “escada” ou diagonal, das seguintes
formas
Exemplos: Para N = 5*/

#include <stdio.h>

int main()
{
    int n, i, j, vet[100];
    
    do{
        printf("digite o tamanho do vetor: ");
        scanf("%d", &n);
    }
    while(n>100);
    
    for (int i = 0; i < n; i++) {
        vet[i] = i + 1;
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n - 1 - i; j++) {
            printf(" ");
        }
        printf("%d\n", vet[i]);
    }
    

    return 0;
}