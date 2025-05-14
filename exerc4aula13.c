// Crie um programa em C que recebe um número e desenha um triângulo de asteriscos usando o número como base e altura.

#include <stdio.h>

int numero;

int main(){
printf("Digite um número: ");
scanf("%d", &numero);

for(int i = 1; i <= numero; i++) {
  for(int j = 1; j <= i; j++) {
    printf("*");
  }
  printf("\n");
}
    return 0;

}

