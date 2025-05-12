/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 27 novembre 2024, 14:21
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

/*
 * 
 */
int main() {
    int indice;
    uint16_t couleurs[8] = {ROUGE, ROUGE, BLEU, BLEU, JAUNE, JAUNE, JAUNE, JAUNE};
    uint16_t chenille[8];
    uint16_t aux;
    int touche;
    InitialiserLeds();

    for (indice = 0; indice < 8; indice++) {
        chenille[indice] = couleurs[indice];
    }

    while (1) {
        aux = chenille[0];
        for (indice = 0; indice < 7; indice++) {
            chenille[indice] = chenille[indice + 1];
        }
        chenille[7] = aux;

        for (indice = 0; indice < 8; indice++) {
            
            Allumer(0, indice, chenille[indice]);
            Allumer(7, indice, chenille[7 - indice]);
            Allumer(indice, 0, chenille[7 -indice] );
            Allumer(indice, 7, chenille[indice] );

        }
        usleep(400000);
        touche = ScannerJoystick();
    } while (touche != KEY_ENTER);
    printf("Fin d'éxecution");
    return (EXIT_SUCCESS);
}
