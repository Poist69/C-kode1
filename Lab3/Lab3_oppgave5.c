// Oppgave 5.

#include <stdio.h>

float arealTrekant(float lengde, float hoyde);

int main() {
float lengde =0;
float hoyde =0;
printf("Skriv inn lengden på grunn-linjen på trekanten:");

scanf("%f", &lengde);
printf("Skriv inn høyden til trekanten:");
scanf("%f", &hoyde);

printf("Arealet av trekanten er: ""%f", (lengde * hoyde)/2);


return 0;


}


float arealTrekant(float lengde, float hoyde){
return (lengde*hoyde)/2;
}


