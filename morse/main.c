/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: hatomyan
 *
 * Created on 4 décembre 2024, 15:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    
    char *morse[36] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
                        ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
                        "...", "-", "..-", "...-", ".--", "-..-","-.--", "--..", "-----",
            ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};

    char *phonetique[26] = {"alpha", "bravo", "charlie", "delta",
                            "echo" , "foxtrop", "golf", "hotel",
                            "india" , "juliett", "kilo", "lima",
                            "mike" , "november", "oscar", "papa",
                            "quebec", "romeo", "sierra", "tango",
                            "uniform", "victor", "whiskey" , "xray",
                            "yankee", "zulu"};
    
    char phrase[255];

    fgets(phrase, sizeof (phrase), stdin);
    printf("%s\n", phrase);
    
    int nb = strlen(phrase);
    
    for (int i = 0; i < nb; i++) {
        if (phrase[i] >= 'a' && phrase[i] <= 'z') {
            printf("%s ", morse[phrase[i] - 'a']);
        }
        if (phrase[i] >= 'A' && phrase[i] <= 'Z') {
            printf("%s ", morse[phrase[i] - 'A']);            
        }
        if (phrase[i] == ' '){
            printf("   ");
        }
    }    
    return (EXIT_SUCCESS);
}