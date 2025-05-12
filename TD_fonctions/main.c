/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 16 décembre 2024, 11:23
 */

#include <stdio.h>
#include <stdlib.h>
#include "operation.h"

int main(int argc, char** argv) {

    float val1, val2;
    char operation;

    if (argc != 4) {
        printf("usage : %s operation val1 val2 \n", argv[0]);
        exit(0);
    }

    sscanf(argv[1], "%c", &operation);
    sscanf(argv[2], "%f", &val1);
    sscanf(argv[3], "%f", &val2);

    //conversion arg 2 et arg3 en reel
    switch (operation) {
        case '+':
            afficherAddition(val1, val2);
            break;

        case '-':
            afficherSoustraction(val1, val2);
            break;

        case '/' :

            afficherDivision(val1, val2);
            break;

        case 'x':

            afficherMultiplication(val1, val2);
            break;
        default:
            printf("Les opérateurs possibles sont : + - / x\n");
    }


    return (EXIT_SUCCESS);
}