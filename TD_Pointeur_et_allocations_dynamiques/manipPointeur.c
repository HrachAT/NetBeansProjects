#include <string.h>

#include "manipPointeur.h"

char *moisNom(int numeroDuMois) {
    char *mois;
    char *lesMois[NB_MOIS] = {
        "Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"
    };
    //On traite les cas non valident
    if (numeroDuMois < 1 || numeroDuMois > NB_MOIS) {
        mois = (char *)
                malloc(
                (1 + strlen("mois inconnu"))
                * sizeof (char));
        strcpy(mois, "mois inconnu");

    } else {//Numero est ok
        mois = (char *) malloc((1 + strlen(lesMois[numeroDuMois - 1])) * sizeof (char));
        strcpy(mois, lesMois[numeroDuMois - 1]);

    }
    return mois;
}

char *supprimerE(char *chaine) {
    char * chaineSansE;
    int compteurDeE;
    int i;
    int iSansE;
    //compter le nombre de e dans la chaine
    compteurDeE = 0;
    for(i=0;i<strlen(chaine);i++)
    {
        if (chaine[i]=='e')
        {
            compteurDeE++;
        }
    }
    //allouer la taille de chaineSansE
    chaineSansE=(char *)malloc(strlen(chaine)-compteurDeE+1);
    //copier les lettres de chaine dans chaineSansE
    //sauf les e
    iSansE = 0;
    for(i=0;i<strlen(chaine);i++)
    {
        if (chaine[i]!='e')
        {
            chaineSansE[iSansE]=chaine[i];
            iSansE++;
        }
    }
    return chaineSansE;
}

char *saisirChaine(char *question){
    char *reponse;
    char tempo[NB_MAX_CAR];
    printf("%s",question);
    scanf("%s",tempo);
    
    reponse=(char *)malloc(sizeof(char)*(1+strlen(tempo)));
    strcpy(reponse,tempo);
    return reponse;
}
void swapFloat(float *ptrV1, float *ptrV2){
    float tmp;
    //tmp prend la valeur pointée par ptrV1
    tmp = *ptrV1;
    //la valuer pointée par ptrV1 est remplacé par la valeur de ptrV2
    *ptrV1=*ptrV2;
    //la valeur de ptrV2 est remplacée par tmp
    *ptrV2=tmp;
}
float discriminant(float a, float b, float c,float *racine1, float *racine2){
    float delta;
    delta = b*b-4*a*c;
    if(delta>=0 && a!= 0){
        *racine1=(-b-sqrtf(delta))/(2.0*a);
        *racine2=(-b+sqrtf(delta))/(2.0*a);
    }
}