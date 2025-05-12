/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 28 novembre 2024, 11:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int longueur, i, j;

    printf("Entrez la longueur du côté du triangle : ");
    scanf("%d", &longueur);

    for (i = 0; i < longueur; i++) {
        for (j = 0; j < longueur - i; j++) {
            printf("#");
        }
        printf("\n"); 
    }

    return 0;
}
