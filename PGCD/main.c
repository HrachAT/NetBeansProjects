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
    int dividende, diviseur, memo;
    printf("Entrez le premier nombre (dividende) : ");
    scanf("%d",&dividende);
    printf("Entrez le deuxieme nomnbre (diviseur) : ");
    scanf("%d",&diviseur);
    
    while (diviseur != 0){
        memo = diviseur;
        diviseur = dividende % diviseur;
        dividende = memo;
    }
    printf("Le PGCD est :%d\n",dividende);
    return (EXIT_SUCCESS);
}

