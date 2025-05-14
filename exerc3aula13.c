// Crie um programa em C que recebe duas strings e verifique se são anagramas. Use strlen e ordenação de vetores.

#include <stdio.h>
#include <string.h>

void ordenarString(char *str) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int saoAnagramas(char *str1, char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0; // Não são anagramas
    }

    ordenarString(str1);
    ordenarString(str2);

    int tamanho = strlen(str1);
    for (int i = 0; i < tamanho; i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    scanf("%99s", str1);
    printf("Digite a segunda string: ");
    scanf("%99s", str2);

    if (saoAnagramas(str1, str2)) {
        printf("As strings são anagramas.\n");
    } else {
        printf("As strings não são anagramas.\n");
    }

    return 0;
}
