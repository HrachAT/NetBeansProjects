/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 11 décembre 2024, 14:33
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    int spaces;
    int current_number = 1;
    int nbLigne;
    
    printf("Combien de lignes ? ");
    scanf("%i",&nbLigne);
    printf("\n");
    
    for(int i =0; i<nbLigne;i++){
        //Impression des espaces
        spaces = (nbLigne / 2)- abs((nbLigne/2)-i);
        for (int s = 0; s < spaces; s++)
            printf("   ");
        
        for(int j = 0; j<(nbLigne-2*spaces);j++){
            printf("%02d ",current_number++);
            current_number %= 100;
        }
        printf("\n");
    }
    printf("\n");
    return (EXIT_SUCCESS);
}
