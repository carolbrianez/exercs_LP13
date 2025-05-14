// exercicio 1 - aula 13:
// Crie um programa em C que recebe uma palavra com até 10 letras e verifique se a palavra é um palíndromo

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[11];
    int i, j, tamanho;
    int palindromo = 1;

    printf("Digite uma palavra com até 10 letras: ");
    scanf("%10s", palavra);
    tamanho = strlen(palavra);
    j = tamanho - 1;
    for (i = 0; i < tamanho; i++) {
        if (palavra[i] != palavra[j]) {
            palindromo = 0;
            break;
        }
        j--;
    }
    
    if (palindromo) {
        printf("A palavra %s é um palíndromo.\n", palavra);
    } else {
        printf("A palavra %s não é um palíndromo.\n", palavra);
    }
    return 0;
}