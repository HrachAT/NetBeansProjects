#include "biblio.h"

float additionReel(float a, float b) {
    return a + b;
}

void afficherCarre(int c) {
    printf("%i\n", c * c);
}

int calculerCarre(int c) {
    return c*c;
}

float calculerDiscriminant(float a, float b, float c) {
    float delta;
    delta = b * b - 4 * a*c;
    return delta;
}

/*Calcule de racine d'un polynome*/
void afficherRacines(float a, float b, float c) {
    float delta = calculerDiscriminant(a, b, c);
    if (delta > 0) {
        float x1 = (-b + sqrtf(delta)) / (2 * a);
        float x2 = (-b - sqrtf(delta)) / (2 * a);
        printf("x1 = %.3f     x2 = %.3f\n", x1, x2);
    }
    if (delta == 0) {
        float x1 = (-1 * b) / (2 * a);
        printf("racine double x = %.3f", x1);
    }
    if (delta < 0) {
        printf("Pas de racine reel \n");
    }
}

void afficherUneLigne(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

void afficherUnCarre(int n) {
    for (int i = 0; i < n; i++) {
        afficherUneLigne(n);
    }
}

void afficherRectangle(int hauteur, int largeur) {
    for (int i = 0; i < hauteur; i++) {
        afficherUneLigne(largeur);
    }
}