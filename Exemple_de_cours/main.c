/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 25 novembre 2024, 10:49
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLEMAX 30
/*
 * 

int main() {
    char nom[TAILLEMAX];
    char prenom[TAILLEMAX];
    char buffer[TAILLEMAX];
    
    printf("donnez votre nom ");
    scanf("%s", buffer);
    
    strcpy(nom, buffer);
    printf("votre nom est : %s\n", nom);
    
    printf("donnez votre prenom ");
    scanf("%s", prenom);
    
    printf("votre prenom est : %s\n",prenom);
    
    if(strcmp(nom,prenom)==0){
        printf("Votre nom et votre prenom sont identiques");
    }
    if (strcmp(nom,prenom)>0){
        printf("Votre nom est alphabétiquement après votre prenom");
    }
    if (strcmp(nom,prenom)<0){
        printf("Votre prenom est alphabétiquement après votre nom");
    }

}
 */
/*
int main(){
    char id[TAILLEMAX];
    char mdp[TAILLEMAX];
    printf("Login : ");
    scanf("%s", id);
    printf("Mot de passe : ");
    scanf("%s", mdp);
    
    if (strcmp(id,"admin")==0 && strcmp(mdp,"toto")==0){
        printf("Bienvenue\n");
    }
    else
    {
        printf("Vous ne pouvez pas passer");
    }
}
*/
int main(){
    char mot[TAILLEMAX];
    
    printf("Un mot svp ?");
    scanf("%s", mot);
    
    
    if(mot[]){
        printf("%s semble pas être potentiellement un verbe di 1er groupe\n",mot);
    }
    