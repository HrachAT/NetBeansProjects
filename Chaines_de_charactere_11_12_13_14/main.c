/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 12 décembre 2024, 11:10
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LOGIN "toto"
#define MDP "citron"
#define TAILLEMAX 150
/*Exercice 11
int main() {
    char reponse [7];
    printf("Ecrivez une chaine de caractère : ");
    scanf("%s",reponse);
    if (strcmp(reponse, "bonjour") == 0 ){
        printf("ok");
    }
    return (EXIT_SUCCESS);
}
*/
/*Exercice 12
int main() {
    char phrase [255];
    printf("saisissez une chaine de caractere : ");
    fgets(phrase, sizeof (phrase), stdin);
    if (strncmp(phrase, "salut",  5) == 0){
        printf("Bon debut\n");
    }
    
}
*/
/*Exercice 13
int main(){

    char login_reponse[255];
    char mdp_reponse[255];
    printf("Entrez votre login : ");
    scanf("%s",login_reponse);
    printf("Entrez le mot de passe : ");
    scanf("%s",mdp_reponse);
    if (strcmp(LOGIN, login_reponse) == 0 && strcmp(MDP, mdp_reponse) == 0){
        printf("accès autorisé\n");
    }else{
        printf("accès refusé\n");
    }
}
*/
int main(){
    char msg [TAILLEMAX];
    char newmsg [TAILLEMAX];
    int i;
    int j;
    int longueur;
    int estunPalindrome = 0;
    strcpy(msg,"c'est moi");
    
    printf("La phrase initiale : [%s] \n",msg);
    j=0;
    for (i = 0; i<strlen(msg);i++){
        if(msg[i]>='a' && msg[i]<='z'){
            //printf("%c",msg[i]);
            newmsg[j]=msg[i];
            j++;
        }
    }
    printf("nouveau message : [%s]\n",newmsg);
    longueur=strlen(newmsg);
    printf("%c %c", newmsg[0], newmsg[longueur-(1+0)]);
    printf("%c %c", newmsg[1], newmsg[longueur-(1+1)]);
    printf("%c %c", newmsg[2], newmsg[longueur-(1+2)]);
    for(i=0;i<longueur;i++){
        //printf("%c %c\n",newmsg[i],newmsg(longueur-(1+i)));
        if(newmsg[i]!=newmsg[longueur-(1+i)]){
            estunPalindrome=1;
        }
    }if (estunPalindrome==0){
        printf("c'est un palindrome\n");
    }else{
        printf("c'est pas un palindrome\n");
    }
}