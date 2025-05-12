/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 13 novembre 2024, 14:40
 */

#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>

/*
 * 
 */
int main() {
    InitialiserJoystick();
    InitialiserLeds();
    
    int position=0;
    
    while(1){
        //position = ScannerJoystick();
        printf("position : %d\n", position);
        sleep(1);
    }
    
    return 0;
}
