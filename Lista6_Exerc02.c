
//ANA CLARA VASCONCELOS LIMA - 578769 - TURMA A


/*2. Crie um programa em C que leia um array de valores inteiros (estritamente não negativos)
com N elementos (N inteiro e maior do que 0) e então exiba o maior, o menor, a soma e a
média de todos os valores. Ao final, imprimir os valores digitados na ordem inversa,
separados por vírgula. OBS.: O programa deve “garantir” que não serão aceitos / lidos
valores negativos.*/

#include <stdio.h>
#include <stdlib.h> 

int main() {
    int N; 
    int vet[100]; 
    int maior, menor;
    long long int soma = 0; 
    float media;

    do {
        printf("Digite o numero de elementos (N > 0): ");
        scanf("%d", &N);
    } while (N <= 0);

    printf("Digite os %d valores inteiros (nao negativos):\n", N);
    for (int i = 0; i < N; i++) {
        int valor_lido;
        do {
            printf("num 1 %d: ", i + 1);
            scanf("%d", &valor_lido);
            if (valor_lido < 0) {
                printf("Valor invalido! Por favor, digite um numero nao negativo.\n");
            }
        } while (valor_lido < 0);
        vet[i] = valor_lido;
    }

    maior = vet[0];
    menor = vet[0];
    soma = vet[0];

    for (int i = 1; i < N; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
        if (vet[i] < menor) {
            menor = vet[i];
        }
        soma += vet[i];
    }
    
    media = (float)soma / N; 
    
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Soma dos valores: %lld\n", soma);
    printf("Media dos valores: %.2f\n", media);

    printf("Valores na ordem inversa: ");
    for (int i = N - 1; i >= 0; i--) {
        printf("%d", vet[i]);
        if (i > 0) {
            printf(", ");
        }
    }
    printf("\n");
    

    return 0;
}