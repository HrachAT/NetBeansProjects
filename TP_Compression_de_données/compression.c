#include "compression.h"

int decompressBmp(char *fichierSource, char *fichierDest) {

    //ouvrir fichier source en lecture
    FILE* fdSource = NULL;

    fdSource = fopen(fichierSource, "r");
    if (fdSource == NULL) return 1;

    //ouvrir fichier destination en écriture
    FILE* fdDest = NULL;

    fdDest = fopen(fichierDest, "w");
    if (fdDest == NULL) return 2;

    //Lecture de l'entête du fichier source

    typeEnTeteFichierBmp enteteFichier;
    int ret;

    ret = fread(&enteteFichier, sizeof (typeEnTeteFichierBmp), 1, fdSource);
    if (ret != 1) {
        return 3;
    }

    //Ecriture de l'entête

    ret = fwrite(&enteteFichier, sizeof (typeEnTeteFichierBmp), 1, fdDest);
    if (ret != 1) {
        return 4;
    }

    //lecture de la palette
    couleur palette[256];
    if (fread(palette, sizeof (couleur), 256, fdSource) != 256) {
        return 5;
    }

    //Ecriture de la palette

    if (fwrite(palette, sizeof (couleur), 256, fdDest) != 256) {
        return 6;
    }

    //Lecture des datas compressées
    rle couple;
    do {
        if (fread(&couple, sizeof (couple), 1, fdSource) == 1) {
            for (int i = 0; i < couple.repetition; i++) {
                fwrite(&couple.valeur, sizeof (char), 1, fdDest);
            }
        }
    } while (couple.repetition != 0x00 || couple.valeur != 0x01);

    //fermer fichier source
    fclose(fdSource);

    //Mise à jour des champs du fichier destination
    enteteFichier.imgHead.typeCompression = 0;

    //Ecriture de l'entête
    fseek(fdDest, 0, SEEK_SET);
    fwrite(&enteteFichier, sizeof (typeEnTeteFichierBmp), 1, fdDest);

    //Fermer fichier destination
    fclose(fdDest);

    return 0;
}