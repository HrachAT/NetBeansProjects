#include "gestionPendu.h"

int main(int argc, char *argv[])
{
    char listeMots[NBMOTS][LONGUEURMAXMOT] = {"bonjour", "maison", "noyau", "temps", "blond"};
    int cptErreur = 0;
    int longueurMot;
    char motATrouver[LONGUEURMAXMOT];
    char motCourant[LONGUEURMAXMOT];
    char choix;
    int i;
    char lettre;
    char histo[NB_MAX_LETTRES_POSSIBLE];
    int cptProposition = 0;
    int trouve; // 0 si le mot est trouvé

    // boucle permettant de rejouer
    do {
        // afficher le menu
        choix = afficherMenu();

        if (choix == 'o') {
            // initialisation des compteurs
            cptErreur = 0;
            cptProposition = 0;

            // tirage d'un mot aléatoire
            strcpy(motATrouver, listeMots[aleatoire(NBMOTS - 1)]);
            longueurMot = strlen(motATrouver);

            // initialisation du mot affiché (mettre autant de - que de lettres dans le mot)
            initialiserMot(motCourant, longueurMot);

            // boucle de jeu
            do {
                // afficher le mot en -
                printf("%s\n", motCourant);

                // afficher les lettres déjà proposées
                afficherLettre(histo, cptProposition);

                // demander une lettre non déjà proposée au joueur
                do {
                    printf("Donnez une lettre : ");
                    scanf(" %c", &lettre);
                } while (verifierLettrePropose(histo, cptProposition, lettre) == 0);

                // ajouter la nouvelle lettre aux lettres déjà proposées
                histo[cptProposition] = lettre;
                cptProposition++;

                // placement de la nouvelle lettre et mise à jour du compteur d'erreurs
                cptErreur += placerLettre(motATrouver, motCourant, lettre);

                system("clear");
                // afficher le gibet
                afficherPendu(cptErreur);

                // tester si le mot est trouvé
                trouve = motEstTrouve(motATrouver, motCourant);
            } while ((trouve != 0) && (cptErreur < NB_MAX_ERREUR)); // sortir si le mot est trouvé ou si on est pendu

            if (trouve == 0) {
                printf("Bravo ! Vous avez trouvé le mot : %s\n", motATrouver);
            } else {
                printf("Perdu ! Le mot était : %s\n", motATrouver);
            }
        }

    } while (choix != -1);

    return EXIT_SUCCESS;
}