#include <stdio.h>
#include <stdlib.h>

/*
int main() {
    int val1,val2,val3,val4;
    
    val1=127;
    val2=128;
    val3=255;
    val4=0;
    
    printf("val1 = %d\n val2 = %d\n val3 = %d\n val4 = %d\n",val1,val2,val3,val4);
    return(0);
}
*/

/*
int main(){
    int note;
    
    printf("Saisire la note : ");
    scanf("%d",&note);
    
    if (note==20 || note >= 16){
        printf("La note est un A");
    }else if (note<16 && note>=12){
        printf("La note est un B");
    }else if (note<12 && note>=8){
        printf("La note est un C");
    }else if (note<8 && note>=4){
        printf("La note est un D");
    }else if (note<4 &&  note>=0){
        printf("La note est un E");
    }
}
*/

/*
int main(){
    char note;
    
    printf("Saisir la note : ");
    scanf("%c",&note);
    
    if (note=='A'){
        printf("La note est comprise entre 20 et 16");
    }else if (note=='B'){
        printf("La note est comprise entre 16 et 12");
    }else if (note=='C'){
        printf("La note est comprise entre 12 et 8");
    }else if (note=='D'){
        printf("La note est comprise entre 8 et 4");
    }else if (note=='E'){
        printf("La note est comprise entre 4 et 0");
    }
}
*/

/*
int main(int argc, char** argv) {
    char lettre;
    
    printf("Entrez une lettre (A, B, C, D ou E) : ");
    scanf(" %c", &lettre); 
    
    switch (lettre) {
        case 'A': 
            printf("L'intervalle pour A est 16-20.\n");
            break;
        case 'B':
            printf("L'intervalle pour B est 12-16.\n");
            break;
        case 'C':
            printf("L'intervalle pour C est 8-12.\n");
            break;
        case 'D':
            printf("L'intervalle pour D est 4-8.\n");
            break;
        case 'E':
            printf("L'intervalle pour E est 0-4.\n");
            break;
        default:
            printf("Lettre invalide. Veuillez entrer une lettre entre A et E.\n");
            break;
    }
    
    return (EXIT_SUCCESS);
}
*/
