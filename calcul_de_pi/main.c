/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 10 décembre 2024, 12:28
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define EPSILON 0.0001
/*
 * 
 */
int main(int argc, char** argv) {
    double pi = 4.0;
    double signe = +1;
    double denumerateur = 1.0;
    double fraction;
    int n = 0;
    
    do{
        signe *= -1;
        denumerateur += 2;
        fraction = 4/denumerateur;
        pi += fraction * signe;
        n++;
    }while(fraction > EPSILON);
    printf("%d pi = % 10f\n",n,pi);
    return (EXIT_SUCCESS);
}