#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 100

int saisir_tableau(float *t);
void afficher_tableau(float *t, int taille);

int main() {
    float tableau[TAILLE_MAX];
    int taille;

    printf(" saisir la taille du tableau, puis ses valeurs :\n");
    taille = saisir_tableau(tableau);

    printf("Voici le tableau saisi :\n");
    afficher_tableau(tableau, taille);

    return 0;
}

int saisir_tableau(float *t) {
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
    for (i = 0; i < taille; i++) {
        printf("%.1f ", t[i]);
    }
    printf("\n");
}

