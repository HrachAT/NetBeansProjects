/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 26 novembre 2024, 12:17
 */

#include <stdio.h>
#include <stdlib.h>
#define NBTETES 36
#define NBPATTES 100

int main() {
    int moutons = NBTETES;
    int dindons = 0;
    int nbpattes;
    
    do {
        moutons--;
        dindons++;
        nbpattes = moutons * 4 + dindons * 2;
    } while (nbpattes != NBPATTES && moutons > 0);
    
    if(nbpattes == NBPATTES){
        printf("Le fermier possede %i moutons et %i dindons",moutons,dindons);
    }else{
        printf("Désolé je ne trouve pas");
    }

    return (EXIT_SUCCESS);
}

