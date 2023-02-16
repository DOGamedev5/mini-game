#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char nome[50];
  int idade;
  float peso;
  
  printf("informe seu nome (maximo de 50 caracteres):\n");
  scanf("%s", nome);
  
  getchar();
  
  printf("\notimo, agora informe a sua idade:\n");
  scanf("%d", &idade);
  
  printf("\notimo, agora o seu peso:\n");
  scanf("%f", &peso);
   
  
  printf("\nnome: %s\nidade: %d\npeso: %.1f\n", nome, idade, peso);
  
  //system("pause");
  return 0;
}