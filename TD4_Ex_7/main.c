/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 28 novembre 2024, 12:25
 */

#include <stdio.h>
#include <stdlib.h>
#define NBCOL 5
#define NBLIGNE 3

int main(int argc, char** argv) {

    int tab[NBCOL][NBLIGNE];
    int colonne;
    int ligne;
    int valeur;
    int cpt = 0;
    
    for (ligne = 0; ligne < NBLIGNE; ligne++)  {
        for (colonne = 0; colonne < NBCOL; colonne++){
            tab[colonne][ligne] = cpt;
            cpt++;

        }
    }
    printf("Colonne ?");
    scanf("%i",&colonne);
    printf("ligne ?");
    scanf("%i",&ligne);
    printf("Valeur ?");
    scanf("%i",&valeur);
    tab[colonne][ligne]=valeur;
    
    for (ligne = 0; ligne < NBLIGNE; ligne++) {
        for (colonne = 0; colonne < NBCOL; colonne++) {
            printf("%4d", tab[colonne][ligne]);
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}
