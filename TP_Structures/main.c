#include <stdio.h>
#include <stdlib.h>
#include "bibliosportif.h"

int main(int argc, char** argv) {

    typeAdherent * adherent[5000];
    char choix;
    int nbAdherent;
    nbAdherent = 0;
    do {
        afficherMenu(nbAdherent);
        
        scanf(" %c",&choix);
        if (choix >= 'a' && choix <= 'z'){
            choix = choix -32;
        }
        switch (choix) {
            case 'A':
                adherent[nbAdherent] = creerUnAdherent();
                nbAdherent++;
                continuer();
                break;
                /*case 'M''m':

                    break;*/
            
            case 'v':
                afficherUnAdherent(adherent[nbAdherent-1]);
                continuer();
                break;
            case 'L':
                afficherLesAdherents(adherent,nbAdherent);
                continuer();
                break;
                /*
            case 'L''l':
                break;
            case 'E''e':
                break;*/
        }


    } while (choix != 'Q');



    return (EXIT_SUCCESS);
}