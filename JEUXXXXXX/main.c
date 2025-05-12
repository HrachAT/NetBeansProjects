#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <string.h>

// Taille du plateau
#define TAILLE_PLATEAU 8

// Affiche le plateau de jeu masquant les bateaux adverses
void afficheTableau(int tableau[TAILLE_PLATEAU][TAILLE_PLATEAU], int masquage) {
    printf("\n   ");
    for (int k = 0; k < TAILLE_PLATEAU; k++) {
        printf("  %d   ", k);
    }
    printf("\n\n");

    for (int y = 0; y < TAILLE_PLATEAU; y++) {
        printf(" %d ", y);
        for (int x = 0; x < TAILLE_PLATEAU; x++) {
            if (masquage && tableau[y][x] == 1) {
                printf("[   ] "); // Masquer les bateaux adverses
            } else {
                switch (tableau[y][x]) {
                    case 0: printf("[   ] "); break;
                    case 1: printf("[ \u26F5] "); break; // Unicode pour un bateau
                    case 2: printf("[ \U0001F4A5] "); break; // Explosion pour touché
                    case 3: printf("[ \U0001F4A7] "); break; // Goutte d'eau pour manqué
                    default: printf("[   ] "); break;
                }
            }
        }
        printf("\n\n");
    }
}

// Vérifie si une case contient un bateau
int verifieCase(int tbJoueur[TAILLE_PLATEAU][TAILLE_PLATEAU], int posY, int posX) {
    return tbJoueur[posY][posX] == 1;
}

// Vérifie si un bateau peut être placé sans chevauchement
int verifieBateau(int tbJoueur[TAILLE_PLATEAU][TAILLE_PLATEAU], int posY, int posX, int sensBateau, int tailleBateau) {
    for (int i = 0; i < tailleBateau; i++) {
        int x = posX + (sensBateau == 2 ? i : 0);
        int y = posY + (sensBateau == 1 ? i : 0);

        if (x >= TAILLE_PLATEAU || y >= TAILLE_PLATEAU || verifieCase(tbJoueur, y, x)) {
            return 1; // Chevauchement ou hors limites
        }
    }
    return 0;
}

// Place un bateau sur le plateau
void placeBateauprocess(int posY, int posX, int tableauDeJeu[TAILLE_PLATEAU][TAILLE_PLATEAU], int tailleBateau, int sensBateau) {
    for (int i = 0; i < tailleBateau; i++) {
        int x = posX + (sensBateau == 2 ? i : 0);
        int y = posY + (sensBateau == 1 ? i : 0);
        tableauDeJeu[y][x] = 1;
    }
}

// Initialisation des bateaux
void initBateau(int tbJoueur[TAILLE_PLATEAU][TAILLE_PLATEAU], int tailleBateau) {
    int posY, posX, sensBateau;
    int valide;

    do {
        printf("\nEntrer le sens du bateau (%d cases) :\n", tailleBateau);
        printf("1. Vertical\n");
        printf("2. Horizontal\n");
        printf("Votre choix : ");
        scanf("%d", &sensBateau);

        if (sensBateau != 1 && sensBateau != 2) {
            printf("\nChoix invalide. Reessayez.\n");
            continue;
        }

        printf("\nEntrer la ligne du bateau (0-%d) : ", TAILLE_PLATEAU - 1);
        scanf("%d", &posY);

        printf("Entrer la colonne du bateau (0-%d) : ", TAILLE_PLATEAU - 1);
        scanf("%d", &posX);

        if (posY < 0 || posY >= TAILLE_PLATEAU || posX < 0 || posX >= TAILLE_PLATEAU) {
            printf("\nCoordonnées hors limites. Reessayez.\n");
            valide = 0;
            continue;
        }

        valide = !verifieBateau(tbJoueur, posY, posX, sensBateau, tailleBateau);

        if (!valide) {
            printf("\nImpossible de placer le bateau ici. Reessayez.\n");
        }
    } while (!valide);

    placeBateauprocess(posY, posX, tbJoueur, tailleBateau, sensBateau);
}

// Placement des bateaux pour un joueur
void debutdepartie(int tbJoueur[TAILLE_PLATEAU][TAILLE_PLATEAU]) {
    int taillesBateaux[] = {2, 3};
    for (int i = 0; i < 2; i++) {
        int tailleBateau = taillesBateaux[i];
        printf("\nPlacez votre bateau de taille %d:\n", tailleBateau);
        initBateau(tbJoueur, tailleBateau);
        afficheTableau(tbJoueur, 0);
    }
}

// Fonction de tir
void tirer(int tableauAdverse[TAILLE_PLATEAU][TAILLE_PLATEAU]) {
    int posY, posX;
    int valide = 0;

    do {
        printf("\nEntrez la ligne du tir (0-%d) : ", TAILLE_PLATEAU - 1);
        scanf("%d", &posY);

        printf("Entrez la colonne du tir (0-%d) : ", TAILLE_PLATEAU - 1);
        scanf("%d", &posX);

        if (posY < 0 || posY >= TAILLE_PLATEAU || posX < 0 || posX >= TAILLE_PLATEAU) {
            printf("\nCoordonnées hors limites. Reessayez.\n");
        } else if (tableauAdverse[posY][posX] == 2 || tableauAdverse[posY][posX] == 3) {
            printf("\nVous avez déjà tiré ici. Reessayez.\n");
        } else {
            valide = 1;
        }
    } while (!valide);

    if (tableauAdverse[posY][posX] == 1) {
        printf("\nTouché !\n");
        tableauAdverse[posY][posX] = 2; // Marquer comme touché
    } else {
        printf("\nManqué !\n");
        tableauAdverse[posY][posX] = 3; // Marquer comme manqué
    }
}

// Main
int main() {
    setlocale(LC_ALL, ""); // Activer l'affichage des caractères Unicode

    int tbJoueur1[TAILLE_PLATEAU][TAILLE_PLATEAU] = {0};
    int tbJoueur2[TAILLE_PLATEAU][TAILLE_PLATEAU] = {0};

    printf("\n<<<<<< BATAILLE NAVALE >>>>>\n");

    // Placement des bateaux
    printf("\n--- JOUEUR 1 ---\n");
    debutdepartie(tbJoueur1);

    printf("\n--- JOUEUR 2 ---\n");
    debutdepartie(tbJoueur2);

    printf("\nTous les bateaux sont placés ! Préparation au combat...\n");

    // Phase de jeu
    int tour = 1;
    while (1) {
        printf("\n--- TOUR %d ---\n", tour);
        if (tour % 2 == 1) {
            printf("\n--- JOUEUR 1 TIRE ---\n");
            afficheTableau(tbJoueur2, 1);
            tirer(tbJoueur2);
        } else {
            printf("\n--- JOUEUR 2 TIRE ---\n");
            afficheTableau(tbJoueur1, 1);
            tirer(tbJoueur1);
        }
        tour++;
    }

    return 0;
}
