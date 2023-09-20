// Program for utregning av arealet av en trekant

#include <stdio.h>
#include <stdlib.h>

float lengde=0, hoyde=0, svar=0; 

int main(){
    printf("Skriv inn lengden på grunn-linjen til trekanten ");
    scanf( "%f", &lengde);
    printf("Skriv inn høyden til trekanten ");
    scanf( "%f", &hoyde);
    svar = lengde*hoyde/2;

    printf("Arealet er %.2f", svar);
    
    getchar();

    return 0;



}
