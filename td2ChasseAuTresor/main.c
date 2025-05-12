/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 20 novembre 2024, 16:25
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

#define FAUX 0
#define VRAI 1

int main() {
    int posX = 4, posY = 4;
    int preX = 4, preY = 4;
    int tresorX = 2, tresorY = 6;
    int touche ;
    int sortie = FAUX;
    InitialiserLeds();
    InitialiserJoystick();
    
    do{
        Allumer(tresorX, tresorY, ORANGE);
        Allumer(preX, preY, NOIR);
        
        preX = posX;
        preY = posY;
        
        Allumer(posX,posY,ROUGE);
        touche = ScannerJoystick();
        switch(touche){
            case KEY_ENTER:
                sortie = VRAI;
                break;
            case KEY_RIGHT:
                posY++;
                break;
            case KEY_LEFT:
                posY--;
                break;
            case KEY_UP:
                posX--;
                break;
            case KEY_DOWN:
                posX++;
                break;
        }
        if (posX < 0) posX = 0;
        if (posX > 7) posX = 7;
        if (posY < 0) posY = 0;
        if (posY > 7) posY = 7;
        if (posX == tresorX, posY == tresorY){
            printf("Gagné");
        }
        
    }while(sortie == FAUX);

    return 0;
}

