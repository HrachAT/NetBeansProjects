/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 20 janvier 2025, 11:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    typeAdherent unMec;
    
    unMec.numeroActivite=5;
    strcpy(unMec.nom,"bidochon");
    strcpy(unMec.prenom,"robert");
    strcpy(unMec.numeroBadge,"1a2b3c4d5e");
    
    printf("%s %s \n",unMec.com, unMec.prenom);
    printf("badge ; %s\n",unMec.numeroBadge);
    printf("numero d'activité : %d \n",unMec.numeroActivite);
    return (EXIT_SUCCESS);
}

