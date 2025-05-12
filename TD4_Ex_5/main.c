/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 28 novembre 2024, 11:18
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main() {
    int note, somme = 0, compte = 0;
    float moyenne;
    
    printf("Entrez les notes (entre un note negative pour arreter) : ");
    
    do {
        printf("Entrez une valuer : ");
        scanf("%d",&note);
        
        if (note>=0){
            somme+=note;
            compte ++;
        }
    }while(note>=0);
    
    if (compte>0){
        moyenne=(float)somme /compte;
        printf("La moyenne est de %f\n",moyenne);
    }else{
        printf("Il n'y a pas de solutions");
    }
    return 0;
}
