#include <stdio.h>

void addition(int a, int b); // prototype de ma fonction

int main( )
{
  int a, b;

  printf("Additionner :\n");
  scanf("%d", &a);

  printf("Avec :\n");
  scanf("%d", &b);

  addition(a, b); // Execute ma fonction qui renverra le résultat de a+b

  return 0;
}

void addition(int a, int b) // Je ne retourne aucune valeur, mais j'exécute du code
{
  int res = a+b;
  
  printf("Le résultat est : %d\n", res);
}