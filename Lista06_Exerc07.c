#include <stdio.h>
#include <string.h>

#define M 21

int main() {
    char p[M], l[M]; 
    int i = 0, j = 0, k, len;

    printf("Palavra (max. %d): ", M - 1);
    
    if (fgets(p, M, stdin) == NULL) return 1;

    p[strcspn(p, "\n")] = 0; 

    while (p[i] != '\0') {
        char c = p[i];

        if (c >= 'A' && c <= 'Z') c += 32; 

        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '-') {
            l[j++] = c;
        }
        i++;
    }
    l[j] = '\0';
    len = j; 
    for (k = 0; k < len / 2; k++) {
        if (l[k] != l[len - 1 - k]) {
            printf("\nA palavra \"%s\" NÃO É UM PALÍNDROMO.\n", l);
            return 0;
        }
    }

    if (len == 0) {
        printf("\nNenhum caractere válido encontrado.\n");
    } else {
        printf("\nA palavra \"%s\" É UM PALÍNDROMO.\n", l);
    }
    
    return 0;
}