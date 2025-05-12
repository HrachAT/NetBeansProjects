/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 11 décembre 2024, 14:30
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int essais = 3;
    int code = 108;
    int c;

    while (1) {
        printf("Entrez le code : ");
        scanf("%d", &c);

        if (c == code) {
            printf("code OK");
            return (EXIT_SUCCESS);
        }
        if (c != code) {
            essais -= 1;
            printf("code incorrect\n");
        }
        if(essais == 0){
            break;
        }
    }
    return (EXIT_SUCCESS);
}
