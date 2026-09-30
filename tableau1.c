#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 10000

int saisir_tableau(float *t);
void afficher_tableau(float *t, int taille);

int main() { 
  int taille;
  float t[] = {7.0, 2.5, 1.0, 5.0, 2.2, 0.0, 7.9, 3.0, 4.0, 1.0};
  taille = 10;
  taille = saisir_tableau(t);
  afficher_tableau(t, taille);
  
}

int saisir_tableau(float * t) {
  int i, taille;
  scanf("%d", &taille);
  if (taille > TAILLE_MAX) {
    printf("La taille dépasse la taille maximale possible.\n");
    exit(1);
  } else {
    for (i = 0; i < taille; i++) {
      scanf("%f", &t[i]);
    }
  }
  return taille;
}


void afficher_tableau(float *t, int taille) {
  int i;
  printf("[");
  for (i=0; i<taille; i++) {
    printf("%.1f", t[i]);
    if (i < taille-1) printf(", ");
  }
  printf("]\n");
}
