//
//  main.c
//  Traccia 16 - Prova all'impronta Programmazione I
//
//  Created by Roberto Vecchio on 19/02/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//
//Sviluppare una function C che, dati come parametri di input un array di char e il suo size, determina e restituisce come parametro di output l’array occorrenze (di size 21) del numero delle occorrenze dell’evento a precede ognuna delle 21 lettere dell’alfabeto italiano (cioè occorrenze[0] è il numero di volte in cui accade che “a precede a”, cioè che nel testo compare aa, occorrenze[1] è il numero di volte in cui accade che “a precede b”, cioè che nel testo compare ab, occorrenze[2] è il numero di volte in cui accade che a precede c, cioè che nel testo compare ac, ...).

#include <stdio.h>
#include <string.h>

void lettersOccurence(char *, unsigned long, int [21]);

int main(int argc, const char * argv[]) {
    
    char phrase[100];
    int count[21] = {0};
    int i;
    
    printf("insert phrase: ");
    fgets(phrase, 4096, stdin);
    
    lettersOccurence(phrase, strlen(phrase), count);
    
    for (i = 0; i < 21; i++) {
        printf(" VALORE = %d\n", count[i]);
    }
    
    return 0;
}

void lettersOccurence(char *phrase, unsigned long size, int count[21]){
    int i;
    
    for (i = 0; i < size; i++) {
        
        if (phrase[i] == 'a' && phrase[i+1] >= 'a' && phrase[i+1] <= 'i' ) {
            count[phrase[i+1] - 'a']++;
        }else if (phrase[i] == 'a' && phrase[i+1] >= 'l' && phrase[i+1] <= 'v' ) {
            count[phrase[i+1] - 'c']++;
        }else if (phrase[i] == 'a' && phrase[i+1] == 'z' ) {
            count[phrase[i+1] - 'f']++;
        }
    }
    
}
