//Ajuste o programa anterior para receber após a impressão uma letra: A para desenhar o triângulo à esquerda e D para desenhar o triângulo à direita. F encerra o programa.

#include <stdio.h>

int numero;
char direcao;

void trianguloEsquerda(int numero) {
  for (int i = 1; i <= numero; i++) {
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
}

void trianguloDireita(int numero) {
  for (int i = 1; i <= numero; i++) {
    for (int j = 1; j <= numero - i; j++) {
      printf(" ");
    }
    for (int j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
}

int main() {
  printf("Digite um número: ");
  scanf("%d", &numero);

  while (1) {
    printf("Digite a direção (A para esquerda, D para direita, F para encerrar): ");
    scanf(" %c", &direcao);

    if (direcao == 'A') {
      trianguloEsquerda(numero);
    } else if (direcao == 'D') {
      trianguloDireita(numero);
    } else if (direcao == 'F') {
      break; 
    } else {
      printf("Direção inválida. Tente novamente.\n");
    }
  }
  return 0;
}
