#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "compression.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    int retour;
    
    printf("argc = %i\n", argc);
    if (argc == 4){
        printf("Premier   argument : %s\n", argv[0]);
        printf("Deuxieme  argument : %s\n", argv[1]);
        printf("Troisieme argument : %s\n", argv[2]);
        printf("Quatrieme argument : %s\n", argv[3]);
    }else{
        printf("Usage rle c fichier_source fichier_destination\n");
    }
    
    if (!strcmp(argv[1], "d")){
        printf("\n\n decompression RLE\n\n");
        retour = decompressBmp(argv[2], argv[3]);
        printf("retour = %i\n\n", retour);
    }
    
    return (EXIT_SUCCESS);
}

