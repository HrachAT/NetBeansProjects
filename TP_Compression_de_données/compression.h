#ifndef COMPRESSION_H
#define COMPRESSION_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

#pragma pack(push, 1)

    typedef struct {
        unsigned int tailleEnTete;
        unsigned int largeur;
        unsigned int hauteur;
        unsigned short nbPlan;
        unsigned short bitParPixel;
        unsigned int typeCompression;
        unsigned int tailleImage;
        unsigned int resolutionHorizontale;
        unsigned int resolutionVerticale;
        unsigned int nbCouleursUtilises;
        unsigned int nbCouleursImportantes;
    } typeEnTeteImageBmp;

    typedef struct {
        unsigned char signature[2];
        unsigned int tailleFichier;
        unsigned int reserve;
        unsigned int adresseImg;
        typeEnTeteImageBmp imgHead;
    } typeEnTeteFichierBmp;

    int decompressBmp(char *fichierSource, char *fichierDest);

    //structure pour une couleur

    typedef struct {
        unsigned char rouge;
        unsigned char vert;
        unsigned char bleu;
        unsigned char alpha;
    } couleur;

    //structure pour un couple rle

    typedef struct {
        unsigned char repetition;
        unsigned char valeur;

    } rle;

#ifdef __cplusplus
}
#endif

#endif /* COMPRESSION_H */

