

/* 
 * File:   cdi.h
 * Author: Hrach Atomyan
 *
 * Created on 30 janvier 2025, 10:10
 */



#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>

#define TAILLEMAX 50
#define NBGENRE 8
#define MAXCAPACITE 50000
#define TAILLE_ISBN 22 //(3+5+7+6+1)
#ifndef CDI_H
#define CDI_H

#ifdef __cplusplus
extern "C" {
#endif

    typedef enum {
        ROMAN,
        AVENTURE,
        BIOGRAPHIE,
        POESIE,
        MANUEL,
        ESSAI,
        FANTAISIE,
        POLAR
    } genres;

    typedef struct {
        unsigned int jour;
        unsigned int mois;
        unsigned int annee;
    } typeDate;

    typedef struct {
        char titre[TAILLEMAX];
        char auteur[TAILLEMAX];
        typeDate dateImpression;
        unsigned int nbGenres;
        genres tabGenre[8];
        int anneeDePublication;
        unsigned char isbn[TAILLE_ISBN];
    } typeOuvrage;


    // affiche le menu en fonction du nombre d'ouvrages
    void afficherMenu(int nb);
    // affiche la date sous la forme JJ/MM/AAAA
    void afficherDate(typeDate laDate);
    // affiche le genre en toute lettre en fonction du parametre
    void afficherGenre(genres g);
    //affiche les informations relatives à un ouvrage
    void afficherUnOuvrage(typeOuvrage *ouvrage);
    // formater un code isn 13
    void saisirISBN(unsigned char isbn[TAILLE_ISBN]);
    // afficher l'isbn au format isbn 13
    void afficherISBN(unsigned char isbn[TAILLE_ISBN]);
    // supprime un ouvrage de la liste des ouvrages
    int supprimerUnOuvrage(typeOuvrage *tab[], unsigned char *isbn, int nb);
    // retourne en pointeur sur un type ouvrage après avoir demander tous les renseignements nécessaires
    typeOuvrage *creerUnOuvrage();
    // ajoute un ouvrage au repertoire des ouvrages
    int ajouterUnOuvrage(typeOuvrage *tab[], int nb);
    // affiche l'ensemble des fiches ouvrage
    void afficherLesOuvrages(typeOuvrage *tab[], int nb);
    // compare 2 isbn retour true si identique
    bool comparerISBN(unsigned char *isbn1, unsigned char *isbn2);
    // retourne l'indice d'un ouvrage selon son isbn, -1 si pas trouve
    int trouverIndiceOuvrage(typeOuvrage *tab[], int nb, unsigned char *isbn);
    // supprime tous les ouvrages
    void supprimerTousLesOuvrages(typeOuvrage *tab[], int nb);

#ifdef __cplusplus
}
#endif

#endif /* CDI_H */



