#include <stdio.h>

struct Joueur
{
  char nom[20]; // Ma structure joueur a un nom
  int vie; // Et de la vie en nombre entier
};


int main( )
{
  struct Joueur joueur1 = {"Joueur1", 100}; // joueur1 a comme nom Joueur1 et a 100 de vie
  
  printf("Le joueur %s a %d points de vie\n", joueur1.nom, joueur1.vie);

  joueur1.vie -= 5; // J'enlève 5 à la variable vie du joueur 1

  printf("Le joueur %s a désormais %d points de vie\n", joueur1.nom, joueur1.vie);

  return 0;
}