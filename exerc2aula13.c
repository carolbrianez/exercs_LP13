// Ajuste o programa do ordenamento para colocar em ordem crescente todos os elementos do vetor.

#include <stdio.h>
#include <string.h>

int main() {

int maior;

int vetor[5] = {9, 7, 3, 6, 8};

printf ("Antes: ");
for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
for (int i = 0; i < 5; i++) { 
    for (int j = i + 1; j < 5; j++)  {
  if( vetor[i] > vetor[j] ) {
    maior = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = maior;
  }
}
}
  printf("Depois: ");
  for(int i = 0; i < 5; i++) {
    printf("%d ", vetor[i]);
  }
 
return 0;
}