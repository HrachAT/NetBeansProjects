#include "bibliosportif.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

/**
 * 
 * @param nb
 */
void afficherMenu(int nb) {
    printf("A : Ajouter une fiche adhérent\n");
    if (nb != 0) {
        printf("S : Supprimer une fiche\n");
        printf("M : Modifier une fiche\n");
        printf("V : Voir le contenu d'une fiche\n");
        printf("L : Voir le contenu de l'esemble des fiches\n");
        printf("E : Supprimer toutes les fiches\n");
    }
    printf("Q : Quitter\n");
}

void continuer() {
    printf("\n Pour continuer appuyer sur une touche\n");
    getchar();
    getchar();
    system("/usr/bin/clear");
}

/**
 * 
 * @param date
 */
void afficherDate(typeDate date) {
    printf("%u/%u/%u ", date.jour, date.mois, date.annee);
}

/**
 * @brief Fonction pour afficher un item de l'énumération sports
 * @param activite
 */
void afficherActivite(sports activite) {

    switch (activite) {
        case NATATION:
            printf("Natation");
            break;
        case BASKETBALL:
            printf("Basketball");
            break;
        case HANDBALL:
            printf("Handball");
            break;
        case SQUASH:
            printf("Squash");
            break;
        case TENNIS:
            printf("Tennis");
            break;
        default:
            printf("Activité inconnue");
            break;
    }


}

void afficherUnAdherent(typeAdherent *ad) {
    printf("Nom                  : %s\n", ad->nom);
    printf("Prenom               : %s\n", ad->prenom);
    printf("Date de naissance    : ");
    afficherDate(ad->dateDeNaissance);
    printf("\n");
    printf("NB d'activitees      : %u\n", ad->nbActivite);
    for (int i = 0; i < ad->nbActivite; i++) {
        afficherActivite(ad->sport[i]);
        printf(",");
    }
    printf("\n");
    printf("N° de carte          : %u\n", ad->numCarte);
}

typeAdherent *creerUnAdherent() {
    typeAdherent * unAdherent;

    //je reserve de la memoire
    unAdherent = (typeAdherent*) malloc(sizeof (typeAdherent));

    printf("Nom : ");
    scanf("%s", unAdherent->nom);
    printf("Prenom : ");
    scanf("%s", unAdherent->prenom);
    printf("Jour de naissance : ");
    scanf("%u", &unAdherent->dateDeNaissance.jour);
    printf("Mois de naissance : ");
    scanf("%u", &unAdherent->dateDeNaissance.mois);
    printf("Annee de naissance : ");
    scanf("%u", &unAdherent->dateDeNaissance.annee);
    printf("Nombre d'activité : ");
    scanf("%u", &unAdherent->nbActivite);
    printf("Quel sport voulez vous faire ?\n");
    printf(" 1 -> Natation\n");
    printf(" 2 -> Basket\n");
    printf(" 3 -> Hand\n");
    printf(" 4 -> Squash\n");
    printf(" 5 -> Tennis\n");

    for (int i = 0; i < unAdherent->nbActivite; i++) {
        printf("activite n° %d : ", i + 1);
        scanf("%u", &unAdherent->sport[i]);
    }
    printf("Numéro d'Adhérent : ");
    scanf("%u", &unAdherent->numCarte);


    return unAdherent;
}

void afficherLesAdherents(typeAdherent *tab[], int nb) {
    printf("N° d'adherent   | Nom   | Prenom   | Date de naissance   | Nb d'activites   | Activites \n");
    printf("----------------|-------| Prenom   |---------------------|------------------|-----------\n");

    for (int i = 0; i < nb; i++) {
        printf(" %u |", tab[i]->numCarte);
        printf(" %s |", tab[i]->nom);
        printf(" %s |", tab[i]->prenom);
        printf(" | ");
        afficherDate(tab[i]->dateDeNaissance);
        printf(" | ");
        printf(" %u |", tab[i]->nbActivite);
        for (int j = 0; j < tab[i]->nbActivite; j++) {
            if (j != 0) printf(",  ");
            afficherActivite(tab[i]->sport[j]);
        }
        printf("\n");
    }
}
