/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 11 décembre 2024, 14:20
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {

    int annee;

    printf("Votre annee ? ");
    scanf("%d", &annee);

    if (annee % 4 == 0 && annee % 400 == 0 || annee % 100 != 0) {
        printf("C'est une annee bissextile !");
    } else {
        printf("Ce n'est pas une annee bissextile ! ");
    }
    return (0);
}

