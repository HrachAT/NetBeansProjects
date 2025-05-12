/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 20 novembre 2024, 14:12
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

int main() {
    int ligne = 0;
    int colonne = 0;
    int taille = 0;
    InitialiserJoystick();
    InitialiserLeds();
    while (1) {



        for (taille = 0; taille < 8; taille++) {
            for (ligne = 0; ligne < taille; ligne++) {
                for (colonne = 0; colonne < taille; colonne++) {
                    if (ligne == colonne) {
                        Allumer(ligne, colonne, ROUGE);
                    } else {
                        Allumer(ligne, colonne, NOIR);
                        Allumer(colonne, ligne, NOIR);
                    }
                }
                Allumer(taille, ligne, ROUGE);
                Allumer(ligne, taille, ROUGE);
                Allumer(taille, taille, ROUGE);

            }
            sleep(1);

        }
        Effacer();
    }        
    return (EXIT_SUCCESS);

}