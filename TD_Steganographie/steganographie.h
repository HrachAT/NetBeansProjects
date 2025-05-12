#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#ifndef STEGANOGRAPHIE_H
#define STEGANOGRAPHIE_H
#define NBCOULEURS 256

#ifdef __cplusplus
extern "C" {
#endif
    
typedef struct
{
    unsigned char signature[2];
    unsigned int tailleFichier;
    unsigned int reserve;
    unsigned int adresseImg;

} typeEnTeteFichierBmp; 

typedef struct
{
    unsigned int tailleEnTete;
    unsigned int largeur;
    unsigned int hauteur;
    unsigned short int nbPlan;
    unsigned short int bitParPixel;
    unsigned int typeCompression;
    unsigned int tailleImage;
    unsigned int resolutionHorizontale;
    unsigned int resolutionVerticale;
    unsigned int nbCouleursUtilises;
    unsigned int nbCouleursImportantes;
} typeEnTeteImageBmp;

typedef struct
{
    unsigned char bleu;
    unsigned char vert;
    unsigned char rouge;
    unsigned char alpha; 
}typeCouleur;

void afficherSteganoTxt(char *nomFichier, int pas);

#ifdef __cplusplus
}
#endif

#endif