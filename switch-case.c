#include <stdio.h>

int main( )
{
  int num;

  printf("Compte après moi : 1\n");
  scanf("%d", &num);

  switch (num) // Vérifier la valeur de num
  {
    case 1: // Si j'ai dit 1
      printf("Je t'ai dit de compter après moi pas de répéter...\n");
      break;
    
    case 2: // Si j'ai dit 2
      printf("3\nBien joué tu sais compter !\n");
      break;
    
    default: // Si ce n'est pas 1 ou 2
      printf("T'es con ou tu le fais exprès ??");
      break;
  }

  return 0;
}