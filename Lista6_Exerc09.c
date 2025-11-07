#include <stdio.h>

int main() {
    char str[100];
    int i, tamanho = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin); 

    
    while (str[tamanho] != '\0') {
        tamanho++;
    }

    if (str[tamanho - 1] == '\n') {
        tamanho--;
    }

    printf("String invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}

