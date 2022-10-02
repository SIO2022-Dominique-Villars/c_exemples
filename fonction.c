#include <stdio.h>

int addition(int a, int b); // prototype de ma fonction

int main( )
{
  int a, b;

  printf("Additionner :\n");
  scanf("%d", &a);

  printf("Avec :\n");
  scanf("%d", &b);

  int calcule = addition(a, b); // Cette variable sera égale à a+b

  printf("Le résultat est : %d\n", calcule); // Je récupère la valeur de ma variable calcule qui est égale à a+b

  return 0;
}

int addition(int a, int b)
{
  int res = a+b; // Je calcule a+b et le stock dans ma variable

  return res; // Je renvoie le résultat
}