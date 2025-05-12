/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   newfile.h
 * Author: hatomyan
 *
 * Created on 13 janvier 2025, 10:29
 */

#ifndef NEWFILE_H
#define NEWFILE_H

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct personne {
        char nom[NBCARMAXNOM];
        char prenom[NBCARMAXPRENOM];
        unsigned int annee;
        float taille;
        float poids;
    };


#ifdef __cplusplus
}
#endif

#endif /* NEWFILE_H */

