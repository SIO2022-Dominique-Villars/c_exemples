#include <stdio.h>

int main( )
{
  char choice;

  do // Le do s'éxécute avant la vérification.
  {
    printf("Souhaitez-vous partir ?\n");
    scanf("%s", &choice);

  } while (choice != 'O' && choice != 'o'); // Vérification de ma réponse, si c'est o ou O je sort de ma boucle

  return 0;
}