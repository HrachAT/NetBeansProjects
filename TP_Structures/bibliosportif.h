#ifndef CENTRE_SPORTIF_H
#define CENTRE_SPORTIF_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NBMAXCAR 50

#ifdef __cplusplus
extern "C" {
#endif

    typedef enum {
        NATATION = 1,
        BASKETBALL,
        HANDBALL,
        SQUASH,
        TENNIS
    } sports;

    typedef struct {
        unsigned int jour;
        unsigned int mois;
        unsigned int annee;
    } typeDate;

    typedef struct {
        char nom[NBMAXCAR];
        char prenom[NBMAXCAR];
        typeDate dateDeNaissance;
        unsigned int nbActivite;
        sports sport[5];
        unsigned int numCarte;
    } typeAdherent;

    void afficherMenu(int nb);
    void afficherDate(typeDate date);
    void afficherActivite(sports activite);
    void afficherUnAdherent(typeAdherent *ad);
    void continuer();
    typeAdherent *creerUnAdherent();


    void afficherLesAdherents(typeAdherent *tab[], int nb);
    int ajouterUnAdherent(typeAdherent *tab[], int nb);

#ifdef __cplusplus
}
#endif

#endif 