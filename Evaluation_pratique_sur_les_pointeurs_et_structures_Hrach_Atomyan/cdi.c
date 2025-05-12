#include "cdi.h"

void afficherMenu(int nb) {
    printf("A : Ajouter un ouvrage\n");
    if (nb != 0) {
        printf("S : Supprimer un ouvrage\n");
        printf("X : Supprimer tous les ouvrages\n");
        printf("V : Voir un ouvrage\n");
        printf("L : Voir l'ensemble des ouvrages\n");
    }
    printf("Q : Quitter\n");
}

void afficherDate(typeDate date) {
    printf("%u/%u/%u ", date.jour, date.mois, date.annee);
}

void afficherGenre(genres g) {

    switch (g) {
        case ROMAN:
            printf("Roman");
            break;
        case AVENTURE:
            printf("Aventure");
            break;
        case BIOGRAPHIE:
            printf("Biographie");
            break;
        case POESIE:
            printf("Poesie");
            break;
        case MANUEL:
            printf("Manuel");
            break;
        case ESSAI:
            printf("Essai");
            break;
        case FANTAISIE:
            printf("Fantaisie");
            break;
        case POLAR:
            printf("Polar");
            break;
        default:
            printf("Activité inconnue");
            break;
    }

}

void afficherUnOuvrage(typeOuvrage *ouvrage) {
    printf("Titre                  : %s\n", ouvrage->titre);
    printf("Auteur               : %s\n", ouvrage->auteur);
    printf("Date d'impression    : ");
    afficherDate(ouvrage->dateImpression);
    printf("\n");
    printf("Nombre de genres le caractérisant      : %u\n", ouvrage->nbGenres);
    for (int i = 0; i < ouvrage->nbGenres; i++) {
        afficherGenre(ouvrage->tabGenre[i]);
        printf(",");
    }
    printf("\n");
    printf("Année de publication  :");
    printf("N° ISBN          : %s\n", ouvrage->isbn);
}

typeOuvrage *creerUnOuvrage() {
    typeOuvrage * unOuvrage;

    //je reserve de la memoire
    unOuvrage = (typeOuvrage*) malloc(sizeof (typeOuvrage));

    printf("Titre : ");
    scanf("%s", unOuvrage->titre);
    printf("Auteur : ");
    scanf("%s", unOuvrage->auteur);
    printf("Jour d'impression : ");
    scanf("%u", &unOuvrage->dateImpression.jour);
    printf("Mois d'impression : ");
    scanf("%u", &unOuvrage->dateImpression.mois);
    printf("Annee d'impression : ");
    scanf("%u", &unOuvrage->dateImpression.annee);
    printf("Nombre de genres le caractérisant : ");
    scanf("%u", &unOuvrage->nbGenres);
    printf("Quel genres ?\n");
    printf(" 1 -> Roman\n");
    printf(" 2 -> Aventures\n");
    printf(" 3 -> Biographie\n");
    printf(" 4 -> Poesie\n");
    printf(" 5 -> Manuel\n");
    printf(" 6 -> Essai\n");
    printf(" 7 -> Fantaisie\n");
    printf(" 8 -> Polar\n");

    for (int i = 0; i < unOuvrage->nbGenres; i++) {
        printf("Genres %d : ", i + 1);
        scanf("%u", &unOuvrage->tabGenre[i]);
    }
    printf("Annee de publication : ");
    scanf("%u", &unOuvrage->anneeDePublication);
    printf("Numéro ISBN : ");
    scanf("%d", &unOuvrage->isbn);


    return unOuvrage;
}

void saisirISBN(unsigned char isbn[TAILLE_ISBN]) {
    unsigned int prefixe;
    unsigned long int groupe;
    unsigned long int editeur;
    unsigned long int numero;
    unsigned int controle;
    unsigned int i;
    unsigned long div;

    do {
        printf("Prefixe : ");
        scanf("%d", &prefixe);
    } while (prefixe != 978 && prefixe != 979);
    do {
        printf("Groupe : ");
        scanf("%lu", &groupe);
    } while (groupe < 10 || groupe > 99999);
    do {
        printf("Editeur : ");
        scanf("%lu", &editeur);
    } while (editeur < 100 || editeur > 9999999);

    do {
        printf("numero : ");
        scanf("%lu", &numero);
    } while (numero < 1 || numero > 999999);
    do {
        printf("controle : ");
        scanf("%d", &controle);
    } while (controle < 1 || controle > 9);
    // formatage isbn
    isbn[0] = prefixe / 100;
    isbn[1] = prefixe / 10 - isbn[0]*10;
    isbn[2] = prefixe - isbn[0]*100 - isbn[1]*10;

    // Formatage du groupe
    div = 10000;
    for (i = 3; i <= 7; i++) {
        if (i > 3) {
            isbn[i] = (groupe / div) % 10;
        } else {
            isbn[i] = (groupe / div);
        }
        div /= 10;
    }
    //isbn[7]=groupe-10000*isbn[3]-1000*isbn[4]-100*isbn[5]-10*isbn[6];
    // Formatage de l'éditeur
    div = 1000000;
    for (i = 8; i <= 14; i++) {
        if (i > 8) {
            isbn[i] = (editeur / div) % 10;
        } else {
            isbn[i] = (editeur / div);
        }
        div /= 10;
    }
    //isbn[14]=editeur-1000000*isbn[8]-100000*isbn[9]-10000*isbn[10]-1000*isbn[11]-100*isbn[12]-10*isbn[13];
    // Formatage du numéro
    div = 100000;
    for (i = 15; i <= 20; i++) {
        if (i > 15) {
            isbn[i] = (numero / div) % 10; // - div * isbn[i - 1];
        } else {
            isbn[i] = (numero / div);
        }
        div /= 10;
    }
    //isbn[20]=numero-100000*isbn[15]-10000*isbn[16]-1000*isbn[17]-100*isbn[18]-10*isbn[19];
    // Formatage du chiffre de contrôle
    isbn[21] = controle;

}

void afficherISBN(unsigned char isbn[TAILLE_ISBN]) {
    printf("%d-%d-%d-%d-%d\n",
            100 * isbn[0] + 10 * isbn[1] + isbn[2],
            10000 * isbn[3] + 1000 * isbn[4] + 100 * isbn[5] + 10 * isbn[6] + isbn[7],
            1000000 * isbn[8] + 100000 * isbn[9] + 10000 * isbn[10] + 1000 * isbn[11] + 100 * isbn[12] + 10 * isbn[13] + isbn[14],
            100000 * isbn[15] + 10000 * isbn[16] + 1000 * isbn[17] + 100 * isbn[18] + 10 * isbn[19] + isbn[20],
            isbn[21]
            );

}

int supprimerUnOuvrage(typeOuvrage *tab[], unsigned char *isbn, int nb) {

    int nbOuvage = nb;
    int indiceOuvrage;
    int i;
    indiceOuvrage = trouverIndiceOuvrage(tab, nb, isbn);
    if (indiceOuvrage != -1) {
        free(tab[indiceOuvrage]);
        for (i = indiceOuvrage; i < nb - 1; i++) {
            tab[i] = tab[i + 1];
        }
        nbOuvage = nb - 1;
    }
    return nbOuvage;
}

void afficherLesOuvrages(typeOuvrage *tab[], int nb) {
    printf("N° ISBN         | Titre   | Auteur   | Date d'impression   | Nombre de genres   | Genres | Année de publication \n");
    printf("----------------|---------|----------|---------------------|--------------------|--------|----------------------\n");

    for (int i = 0; i < nb; i++) {
        printf(" %s |", tab[i]->isbn);
        printf(" %s |", tab[i]->titre);
        printf(" %s |", tab[i]->auteur);
        printf(" | ");
        afficherDate(tab[i]->dateImpression);
        printf(" | ");
        printf(" %u |", tab[i]->nbGenres);
        for (int j = 0; j < tab[i]->nbGenres; j++) {
            if (j != 0) printf(",  ");
            afficherGenre(tab[i]->tabGenre[j]);
        }
        printf(" | %d", tab[i]->anneeDePublication);
        printf(" | ");
        printf("\n");
    }
}


int ajouterUnOuvrage(typeOuvrage *tab[], int nb){
    int retour;
    tab[nb] = creerUnOuvrage();
    retour = nb + 1;
    return retour;
}

bool comparerISBN(unsigned char *isbn1, unsigned char *isbn2) {
    bool identique = true;
    int i;
    for (i = 0; i < TAILLE_ISBN; i++) {
        if (isbn1[i] != isbn2[i]) {
            identique = false;
        }
    }

    return identique;
}

int trouverIndiceOuvrage(typeOuvrage *tab[], int nb, unsigned char *isbn) {

    int i;
    int indiceOuvrage = -1;
    for (i = 0; i < nb; i++) {
        if (comparerISBN(isbn, tab[i]->isbn)) {
            indiceOuvrage = i;
        }
    }

    return indiceOuvrage;
}

void supprimerTousLesOuvrages(typeOuvrage *tab[], int nb) {

}
