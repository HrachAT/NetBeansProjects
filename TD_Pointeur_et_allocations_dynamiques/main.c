#include <stdio.h>
#include <stdlib.h>

#include "manipPointeur.h"

int main(int argc, char** argv)
 {
    /* 
       char *ptrCar;
       int *ptrEntier;
       float *ptrReel;
       char chaine[] = "12345678000A";
       int i;
       ptrCar = chaine;
       ptrEntier = (int *) chaine;
       ptrReel = (float *) chaine;
       for (i = 0; i < 3; i++)
       {
           printf("ptrCar    = %p       *ptrCar    = %c\n", ptrCar, *ptrCar);
           printf("ptrEntier = %p       *ptrEntier = %d\n", ptrEntier, *ptrEntier);
           printf("ptrReel   = %p       *ptrReel   = %f\n", ptrReel, *ptrReel);
           ptrCar++;
           ptrEntier++;
           ptrReel++;
           printf("\n");
       }
       return (EXIT_SUCCESS);
     */


    /*
    char *leMois;
    leMois=moisNom(12);
    printf("Nom du mois : %s \n",leMois);


        char *sansE;
        sansE = supprimerE("c'est le printemps, enfin, presque !");
        printf("[c'est le printemps, enfin, presque !]\n Sans les e[%s]\n",sansE);
    
        free(sansE);
        sansE=supprimerE("coucou");
        printf("[coucou]\n ");

    char *nom;
    nom = saisirChaine("comment vous appelez-vous?");
    printf(" vous vous appelez %s\n", nom);
    
    float v1, v2;
    v1=3.14;
    v2=5.2;
    printf("avant  v1 = %.2f v2 = %.2f\n",v1,v2);
    swapFloat(&v1,&v2);
    printf("apres  v1 = %.2f v2 = %.2f\n",v1,v2);*/

    float r1=0, r2=0;
    
    if (discriminant(1,8,2,&r1,&r2)<0){
        printf("pas de racines\n");
    }else{
        printf("Racines : %.2f et %.2f\n",r1,r2);
    }
}