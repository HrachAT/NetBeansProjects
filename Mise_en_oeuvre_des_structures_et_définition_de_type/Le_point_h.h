/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   Le_point_h.h
 * Author: hatomyan
 *
 * Created on 20 janvier 2025, 11:20
 */

#ifndef LE_POINT_H_H
#define LE_POINT_H_H
#define NB_MAX_CAR_NOM 50;
#define NB_MAX_CAR_PRENOM 50;


#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
	char nom[NB_MAX_CAR_NOM];
	char prenom[NB_MAX_CAR_PRENOM];
	unsigned int annee;
	float taille;
	float poids;
}typePersonne;


#ifdef __cplusplus
}
#endif

#endif /* LE_POINT_H_H */

