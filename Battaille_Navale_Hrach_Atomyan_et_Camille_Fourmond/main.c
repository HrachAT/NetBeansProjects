#include <stdio.h>
#include <wchar.h>
#include <locale.h>

// Taille du plateau
#define TAILLE_PLATEAU 8

// Affiche le plateau de jeu
void afficheTableau(int tableau[TAILLE_PLATEAU][TAILLE_PLATEAU]) {
    printf("\n   ");
    for (int k = 0; k < TAILLE_PLATEAU; k++) {
        printf("  %d   ", k);
    }
    printf("\n\n");

    for (int y = 0; y < TAILLE_PLATEAU; y++) {
        printf(" %d ", y);
        for (int x = 0; x < TAILLE_PLATEAU; x++) {
            switch (tableau[y][x]) {
                case 0: printf("[   ] "); break;
                case 1: printf("[ \u26F5] "); break; // Unicode pour un bateau
                case 2: printf("[ \u1F525] "); break; // Touché
                case 3: printf("[ \u1F30A] "); break; // Manqué
                default: printf("[   ] "); break;
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
    for (int tailleBateau = 2; tailleBateau <= 4; tailleBateau++) {
        printf("\nPlacez votre bateau de taille %d:\n", tailleBateau);
        initBateau(tbJoueur, tailleBateau);
        afficheTableau(tbJoueur);
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

    return 0;
}