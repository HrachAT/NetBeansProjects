/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 5 décembre 2024, 12:47
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    char pseudo[100];
    int chiffre1;
    int chiffre2;
    int chiffre3;
    int chiffre4;
    char rejouer;
    int n;
    printf("Donnez votre pseudo : \n");
    scanf("%s", pseudo);
    printf("Bonjour %s\n", pseudo);
    printf("Vous devez donner 4 chiffres compris entre 0 et 9\n");
    do {
        do {
            printf("Chiffre 1 : ");
            scanf("%d", &chiffre1);
        } while (chiffre1 <= 0 || chiffre1 >= 9);
        do {
            printf("Chiffre 2 : ");
            scanf("%d", &chiffre2);
        } while (chiffre2 <= 0 || chiffre1 >= 9);
        do {
            printf("Chiffre 3 : ");
            scanf("%d", &chiffre3);
        } while (chiffre3 <= 0 || chiffre1 >= 9);
        do {
            printf("Chiffre 4 : ");
            scanf("%d", &chiffre4);
        } while (chiffre4 <= 0 || chiffre1 >= 9);

        printf("Votre proposition est : %d%d%d%d\n",chiffre1,chiffre2,chiffre3,chiffre4);
        n++;
        if (chiffre1 == 1 && chiffre2 == 2 && chiffre3 == 3 && chiffre4 == 4){
            printf("Bravo %s vous avez trouvé en %d coups\n",pseudo,n);
        }else{
            printf("Ce n'est pas la bonne combianaison\n");
            printf("Veuillez réessayer\n");
            printf("Vous devez donner 4 chiffres compris entre 0 et 9\n");
        }
    } while (chiffre1 != 1 || chiffre2 != 2 || chiffre3 != 3 || chiffre4 != 4);

    return (EXIT_SUCCESS);
}
