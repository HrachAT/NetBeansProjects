/* 
 * File:   main.c
 * Author: Hrach Atomyan
 *
 * Created on 30 janvier 2025, 10:10
 */

#include <stdio.h>
#include <stdlib.h>
#include "cdi.h"

/*
 * 
 */
int main(int argc, char** argv) {
    char choix;
    unsigned char isbn[TAILLE_ISBN];
    int indiceOuvrage;

    int *cdi[MAXCAPACITE];
    int nbOuvrages = 0;

    do {
        afficherMenu(nbOuvrages);
        printf("Votre choix ? ");
        scanf(" %c", &choix);
        switch (choix) {
            case 'A':
                printf("Ajouter un ouvrage \n");
                cdi[nbOuvrages] = creerUnOuvrage();
                nbOuvrages++;
                break;
            case 'S':
                printf("Supprimer un ouvrage \n");
                printf("Donner l'isbn de l'ouvrage à supprimer \n");
                saisirISBN(isbn);
                nbOuvrages = supprimerUnOuvrage(cdi, isbn, nbOuvrages);
                break;
            case 'X':
                do {
                    printf("Etes vous certain de vouloir supprimer tous les ouvrages (o/n)?");
                    scanf(" %c", &choix);
                } while (choix != 'o' && choix != 'n');
                if (choix == 'o') {
                    supprimerTousLesOuvrages(cdi, nbOuvrages);
                    nbOuvrages = 0;
                }
                break;
            case 'V':
                printf("Voir un ouvrage \n");
                printf("Donner l'isbn de l'ouvrage  \n");
                saisirISBN(isbn);
                indiceOuvrage = trouverIndiceOuvrage(cdi, nbOuvrages, isbn);
                if (indiceOuvrage != -1) { // afficher l'ouvrage
                    afficherUnOuvrage(cdi[nbOuvrages-1]);
                } else {
                    printf("Ouvrage non reference\n");
                }
                break;
            case 'L':
                printf("Affichage de tous les ouvrages\n");
                afficherLesOuvrages(cdi, nbOuvrages);
                break;
            case 'Q':
                printf("Au revoir\n");
                break;
            default:
                printf("Je ne reconnais pas ce choix\n");
                break;
        }


    } while (choix != 'Q');

    return (EXIT_SUCCESS);
}

