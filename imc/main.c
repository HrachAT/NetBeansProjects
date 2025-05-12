#include <stdio.h>
#include <math.h>
#include <string.h>

// Fonction pour calculer l'IMC
float calculer_imc(float poids, float taille) {
    return poids / (taille * taille);
}

// Fonction pour déterminer la corpulence
const char* determiner_corpulence(float imc) {
    if (imc < 16.5) return "Famine";
    else if (imc < 18.5) return "Maigreur";
    else if (imc < 25) return "Normale";
    else if (imc < 30) return "Surpoids";
    else if (imc < 35) return "Obésité modérée";
    else if (imc < 40) return "Obésité sévère";
    else return "Obésité morbide";
}

// Fonction pour calculer le poids idéal selon la formule de Lorentz
float poids_ideal_lorentz(float taille, char sexe) {
    if (sexe == 'h') return taille * 100 - 100 - ((taille * 100 - 150) / 4);
    else return taille * 100 - 100 - ((taille * 100 - 150) / 2.5);
}

// Fonction pour calculer le poids idéal selon la formule de Devine
float poids_ideal_devine(float taille, char sexe) {
    if (sexe == 'h') return 50 + 2.3 * ((taille * 100 - 152.4) / 2.54);
    else return 45.5 + 2.3 * ((taille * 100 - 152.4) / 2.54);
}

// Fonction principale
int main() {
    char nom[50], prenom[50], sexe;
    int age;
    float taille, poids;
    int choix;

    printf("Entrez votre nom : ");
    scanf("%s", nom);
    printf("Entrez votre prénom : ");
    scanf("%s", prenom);

    // Saisie du sexe avec validation
    do {
        printf("Entrez votre sexe ('h' pour homme, 'f' pour femme) : ");
        scanf(" %c", &sexe);
    } while (sexe != 'h' && sexe != 'f');

    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre taille (en mètres) : ");
    scanf("%f", &taille);

    printf("Entrez votre poids (en kilogrammes) : ");
    scanf("%f", &poids);

    // Calcul de l'IMC et détermination de la corpulence
    float imc = calculer_imc(poids, taille);
    const char* corpulence = determiner_corpulence(imc);

    // Affichage récapitulatif
    printf("\n--- Informations ---\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Sexe : %s\n", (sexe == 'h') ? "Homme" : "Femme");
    printf("Âge : %d ans\n", age);
    printf("Taille : %.2f m\n", taille);
    printf("Poids : %.2f kg\n", poids);
    printf("IMC : %.2f\n", imc);
    printf("Corpulence : %s\n", corpulence);

    // Menu pour le calcul du poids idéal
    do {
        printf("\n--- Menu Poids Idéal ---\n");
        printf("1. Poids idéal (Lorentz)\n");
        printf("2. Poids idéal (Devine)\n");
        printf("3. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Poids idéal selon Lorentz : %.2f kg\n", poids_ideal_lorentz(taille, sexe));
                break;
            case 2:
                printf("Poids idéal selon Devine : %.2f kg\n", poids_ideal_devine(taille, sexe));
                break;
            case 3:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 3);

    return 0;
}