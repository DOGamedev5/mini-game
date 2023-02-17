#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char name[50];
  int damage = 15;
  int life = 100;
  int maxLife = 100;

  int damEnemy= 5;
  int lifeEnemy = 30;
  int enemyMax = 30;
  
  printf("informe seu nome (maximo de 50 caracteres):\n");
  fgets(name, 50, stdin);
  getchar();

  printf("otimo, agora podemos começar!\n");

  getchar();

  enemy();



  
  //system("pause");
  return 0;
}

int enemy() {
  int move;
  printf("\num inimigo apareceu!\n");
  getchar();

  printf("\no que você vai fazer?\n1:atacar | 2:cura\n\n(digite o numero correspondente)");

  return 0;
}