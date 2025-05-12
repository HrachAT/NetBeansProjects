/* 
 * File:   biblio.h
 * Author: hatomyan
 *
 * Created on 8 janvier 2025, 14:16
 */

#ifndef BIBLIO_H
#define BIBLIO_H
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

    float additionReel(float a, float b);
    void afficherCarre(int);
    int calculerCarre(int);
    float calculerDiscriminant(float,float,float);
    void afficherRacines(float,float,float);
    void afficherUneLigne(int);
    void afficherUnCarre(int);
    void afficherRectangle(int,int);
    
#ifdef __cplusplus
}
#endif

#endif /* BIBLIO_H */

