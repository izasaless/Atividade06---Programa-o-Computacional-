#include <stdio.h>

int main() {
    char str[100], caractere;
    int i = 0, vogais = 0;

    printf("Digite uma string (até 100 caracteres): ");
    fgets(str, 100, stdin); 

    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &caractere);  

 
    while (str[i] != '\0') {
        char c = str[i];
    
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            
            vogais++;
            str[i] = caractere;  
        }

        i++;
    }

    printf("\nNova string: %s", str);
    printf("Número de vogais antes da substituição: %d\n", vogais);

    return 0;
}

