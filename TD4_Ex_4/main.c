/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 28 novembre 2024, 11:03
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    const int reponse = 5;
    int valeur;
    int essai = 0;
    
    do{
        printf("Entrez une valeur : ");
        scanf("%d",&valeur);
        
        essai ++;
        if (valeur>reponse){
            printf("C'est plus petit\n");
        }else if (valeur<reponse){
            printf("C'est plus grand\n");
        }else{
            printf("Vous avez trouvé\n");
        }
    }while(valeur!=reponse);
}
