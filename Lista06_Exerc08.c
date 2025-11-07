#include <stdio.h>
#include <string.h>

#define MAX 101 

int main() {
    char p[MAX], l[MAX]; 
    int i = 0, j = 0, k, len;
    
    printf("Digite uma frase (max. %d caracteres):\n", MAX - 1);
    if (fgets(p, MAX, stdin) == NULL) return 1;
    p[strcspn(p, "\n")] = 0; 

    while (p[i] != '\0') {
        char c = p[i];

        if (c >= 'A' && c <= 'Z') c += 32; 

        if (c >= 'a' && c <= 'z' || c >= '0' && c <= '9') {
            l[j++] = c;
        }
        i++;
    }
    l[j] = '\0';
    len = j; 

    for (k = 0; k < len / 2; k++) {
        if (l[k] != l[len - 1 - k]) {
            printf("\nA frase processada NÃO É UM PALÍNDROMO.\n");
            return 0;
        }
    }

    if (len == 0) {
        printf("\nNenhum caractere válido encontrado na frase.\n");
    } else {
        printf("\nFrase Limpa: \"%s\"\n", l);
        printf("A frase processada É UM PALÍNDROMO.\n");
    }
    
    return 0;
}