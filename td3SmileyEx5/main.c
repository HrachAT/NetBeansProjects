/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 27 novembre 2024, 16:26
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#define N NOIR
#define J JAUNE
#define V VERT
#define R ROUGE

/*
 

    */

int main(int argc, char** argv) {

    int i;
    int j;

    InitialiserLeds();
    InitialiserJoystick();

    uint16_t image1[8][8]={
        {N,J,J,J,J,J,J,N},
        {J,V,J,J,J,J,V,J},
        {J,J,J,J,J,J,J,J},
        {J,J,J,V,V,J,J,J},
        {J,J,J,J,J,J,J,J},
        {J,J,V,J,J,V,J,J},
        {N,J,J,V,V,J,J,N},
        {N,N,J,J,J,J,N,N},
    };

    for(i = 0;i<8;i++){
        for(int j=0; j<8; j++){
            Allumer(i,j,image1[i][j]);
        }
    }

    return (EXIT_SUCCESS);
}
