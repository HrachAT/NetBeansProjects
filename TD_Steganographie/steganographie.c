#include "steganographie.h"

void afficherSteganoTxt(char *nomFichier, int pas) {
    FILE *fic;
    int retour;
    typeEnTeteFichierBmp etF;
    typeEnTeteImageBmp etI;
    typeCouleur palette[NBCOULEURS];

    //ouverture du fichier en lecture
    fic = fopen(nomFichier, "r");
    if (fic == NULL) {
        printf("ouverture : %s\n", strerror(errno));
        exit(errno);
    }

    // lecture en-tete fichier bmp
    retour = fread(&etF, sizeof (typeEnTeteFichierBmp), 1, fic);

    if (retour != 1) {
        printf("fread : %s\n", strerror(errno));
        exit(errno);
    }

    // lecture en-tete image bmp
    retour = fread(&etI, sizeof (typeEnTeteImageBmp), 1, fic);

    if (retour != 1) {
        printf("fread : %s\n", strerror(errno));
        exit(errno);
    }

    //lire la palette
    retour = fread(palette, sizeof (typeCouleur), NBCOULEURS, fic);
    if (retour != NBCOULEURS) {
        printf("fread couleurs : %s\n", strerror(errno));
        exit(errno);
    }
};
