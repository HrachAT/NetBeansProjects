/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 13 janvier 2025, 10:29
 */

#include <stdio.h>
#include <stdlib.h>
#include "newfile.h"

/*
 * 
 */
int main(int argc, char** argv) {
    //char*nomjour[7]={"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};

/*boolean estUnPalindrome(char *chaine) {
        int i;
        int longueur;
        boolean idem = TRUE;
        longueur = strlen(chaine);
        for (i = 0; i < longueur / 2; i++) {
            if (chaine[i] != chaine[(longueur - 1) - i]) {
                idem = FALSE;
            }
        }
        return idem;
    }*/


    boolean estUnPalindrome(char *chaine) {
        int i;
        int longueur;
        boolean idem = TRUE;
        longueur = strlen(chaine);
        for (i = 0; i < longueur / 2; i++) {
            if (chaine[i] != chaine[(longueur - 1) - i]) {
                idem = FALSE;
            }
        }
        return idem;
    }

    typePersonne creePersonne() {
        typePersonne p;
        printf("Votre nom ?");
        scanf("%c", p.nom);
        printf("Votre prénom ?");
        scanf("%c", p.prenom);
        printf("Votre année de naissance ?");
        scanf("%i", &p.annee);
        printf("Votre  taille ?");
        scanf("%i", &p.taille);
        printf("Votre poids ?");
        scanf("%i", &p.poids);



    }
    return (EXIT_SUCCESS);
}

