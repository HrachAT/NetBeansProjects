/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 8 janvier 2025, 14:02
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblio.h"


int main(int argc, char** argv) {
    
    printf("%f\n", additionReel(2.0, 3.0));
    int val = calculerCarre(8);
    printf("%i\n",val);
    float delta = calculerDiscriminant(2,4,2);
    printf("Discriminant %f\n", delta);
    afficherRacines(2,9,5);
    afficherUneLigne(5);
    printf("\n");
    afficherUnCarre(3);
    printf("\n");
    afficherRectangle(5,7);
    return (EXIT_SUCCESS);
}

