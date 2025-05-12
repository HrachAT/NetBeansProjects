/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 2 décembre 2024, 12:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int dividende;
    int diviseur;
    int memo;
    
    printf("Donnez un dividende ");
    scanf("%d",&dividende);
    printf("Donnez un diviseur ");
    scanf("%d",&diviseur);
    
    
    while(diviseur!=0){
        memo = diviseur;
        diviseur = dividende % diviseur;
        dividende = memo;
    }
    printf("Le PGCD est : %d",dividende);
    
    return (EXIT_SUCCESS);
}
