#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
     // Variáveis que podem ser usadas
     unsigned int x[200];
     int y;
     int z;
     int k;
     int w;
     int j;
     int i;
     
     //#########################
     
     i=0;
     while (i < 200) {
         x[i] = 0;
         i++; }
     z = 0;
     i = 0;

     printf("Digite números entre [0] - [5000]: \n");
     printf("Digite -1 para imprimir os resultados. \n");
     while (y != -1) {
       scanf("%d", &y);
       j = y / 32;
       if((y !=-1 ) && ( y >= 0 && y <= 5000)) {
           x[j] = x[j] | (1 << (y-(32*j)));
           if (y>i) { i = y; }
       } 
     }
     y = 0;
     w = 0;

     printf("________________________\nNúmeros Inseridos:\n");
     while (y <= i) {
       if((x[w] >> (y-(32*w))) & 1) {
         printf("> %d \n", y);}
       y++;
       w = y / 32;
     }
     //#########################
   
  return 0;  
}