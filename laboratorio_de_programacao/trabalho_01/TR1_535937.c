#include <stdio.h>
#include <stdlib.h>

int main() {

  int inputDados; // Input do usuário (entrada de dados)
  int counter;    // Contador
  int posX;       // Deslocamento
  
  printf("Digite um valor entre 0 e 31: ");
  scanf("%d", &inputDados);
  printf("O numero digitado foi: %d | Binario = ", inputDados);

  if (inputDados >= 0 && inputDados <= 31) {
    for (counter = 4; counter >= 0; counter--) {
      posX = inputDados >> counter;
      if (posX & 1) {
        printf("1");
      } else {
        printf("0");
      }
    }
  } else {
    printf("Valor não encontrado, digite entre 0 e 31");
  }
 
  printf("\n");
  return 0;
}
