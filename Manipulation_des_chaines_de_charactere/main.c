/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 4 décembre 2024, 14:00
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 

int main(int argc, char** argv) {
    
    char phrase[255];
    
    fgets(phrase, sizeof(phrase), stdin);
    printf("%s\n", phrase);
    
    // Longueur chaine de caractère
    int nb = strlen(phrase);
    printf("Longueur : %i\n",nb);
    
    if (!strcmp(phrase,"coucou\n")) {
        printf("c'est égal\n");
    } else {        
        printf("c'est inégal\n");
    }
    
    return (EXIT_SUCCESS);
}
 */

int main(int argc, char** argv) {

    char phrase[255];
    char copie[255];
    fgets(phrase, sizeof (phrase), stdin);
    printf("%s\n", phrase);

    //Longueur de la chaine de caractere
    int nb = strlen(phrase);
    printf("Longueur : %i\n", nb);


    //attention ne pas ecrire if(phrase == coucou)
    if (!strcmp(phrase, "coucou\n")) {
        printf("c'est égale\n");
    } else {
        printf("c'est différent\n");
    }

    strcpy(copie, phrase);
    printf("%s\n", copie);

    //reponse a la question 3
    int nbVoyelle = 0;
    int nbconsonne = 0;
    char voyelles[12] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    int voyelle_trouvee;

    for (int indice = 0; indice < nb; indice++) {
        voyelle_trouvee = 0;
        for (int j = 0; j < 12; j++) {
            if (phrase[indice] == voyelles[j]) {
                nbVoyelle++;
                voyelle_trouvee = 1;

            }
        }
        if (!voyelle_trouvee && phrase[indice] != ' ' && phrase[indice] != '\n') {
            nbconsonne++;
        }
    }

    printf("il y a %i voyelles dans la phrase\n\n", nbVoyelle);
    printf("il y a %i consonne dans la phrase\n\n", nbconsonne);

    for (int i = 0; i < nb; i++) {
        if (phrase[i] >= 'a' && phrase[i] <= 'z') {
            phrase[i] = phrase[i] - 32;
        } else {
            if (phrase[i] >= 'A' && phrase[i] <= 'Z') {
                phrase[i] = phrase[i] + 32;
            }
        }
    }
    printf("%s\n", phrase);
    int compte = 0;
    int mots = 0;
    for (int i = 0; i < nb; i++) {
        if (isspace(phrase[i])) {
            mots = 0;
        } else if (!mots) {
            mots = 1;
            compte++;
        }
    }
    printf("Nombre de mots : %d\n", compte);
    return (EXIT_SUCCESS);
}
