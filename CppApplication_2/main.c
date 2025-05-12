/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 9 décembre 2024, 11:11
 */

#include <stdio.h>
#include <stdlib.h>

#include "Biblioperso.h"

/*
 * 
 */
int main() {
    afficherMenu('f');
    printf("res : %.2f \n", additionReels(3.14,2.5));
    printf("partie entiere : %d \n", partieEntier(3.14));
    
    return (EXIT_SUCCESS);
}

