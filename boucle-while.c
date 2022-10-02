#include <stdio.h>

int main( )
{
  char choice;

  while (choice != 'O' && choice != 'o') // Vérification puis exécution 
  {
    printf("Souhaitez-vous partir ?\n");
    scanf("%s", &choice);
  }

  return 0;
}