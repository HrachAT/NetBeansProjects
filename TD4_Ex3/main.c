/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 28 novembre 2024, 11:01
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int nombre, debut, fin, i;

    printf("Entrez le nombre pour afficher sa table de multiplication : ");
    scanf("%d", &nombre);

    printf("Entrez la borne de début : ");
    scanf("%d", &debut);

    printf("Entrez la borne de fin : ");
    scanf("%d", &fin);

    printf("Table de multiplication de %d de %d à %d :\n", nombre, debut, fin);
    for (i = debut; i <= fin; i++) {
        printf("%d x %d = %d\n", i, nombre, i * nombre);
    }

    return (EXIT_SUCCESS);
}
