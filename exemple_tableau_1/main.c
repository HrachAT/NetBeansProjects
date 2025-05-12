/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 18 novembre 2024, 10:34
 */

#include <stdio.h>
#include <stdlib.h>

#define NB_JOURS 31

int main(){
    float min[NB_JOURS] = {0,5,6,7,7};
    float max[NB_JOURS] = {20,18,19,17,22};
    
    int i=0;
    float valeur_mini_mois = min[0];
    while(i<NB_JOURS){
        if (min[i] < valeur_mini_mois)
            valeur_mini_mois = min[i];
        i++;
    }
    printf("La valeur minimale est %2f", valeur_mini_mois);
    return (EXIT_SUCCESS);
}