/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   manipPointeur.h
 * Author: hatomyan
 *
 * Created on 16 janvier 2025, 10:19
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef MANIPPOINTEUR_H
#define MANIPPOINTEUR_H
#define NB_MOIS 12
#define NB_MAX_CAR 250

#ifdef __cplusplus
extern "C" {
#endif

    char *moisNom(int numeroDuMois);
    char *supprimerE(char *chaine);
    char *saisirChaine(char *question);
    void swapFloat(float *ptrV1, float *ptrV2);
    float discriminant(float a, float b, float c,float *racine1, float *racine2);
#ifdef __cplusplus
}
#endif

#endif /* MANIPPOINTEUR_H */

