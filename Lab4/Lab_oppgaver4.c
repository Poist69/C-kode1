/*#include "stdio.h"
#include "stdlib.h"
int main() {
int alder; //oppretter en ny heltalls variabel
printf("Hei! Hvor gammel er du?");
scanf("%d", &alder); // leser fra tastaturet til variabelen alder
if (alder>20) // tester om alder er større enn 20
printf("Du er over 20 år \n"); // hvis alder > 20 blir dette utført
else if(alder==20)
printf(" Du er 20 år !!!!! \n");
else
printf("Du er under 20 år \n"); // hvis alder ikke er > 20 år blir dette utført

return 0;
}*/


/*#include "stdio.h"
include "stdlib.h"
int main() {
int alder; //oppretter en ny heltalls variabel
printf("Hei! Hvor gammel er du?");
scanf("%d", &alder); // leser fra tastaturet til variabelen alder
if ( (alder>=20) && (alder<=30) )
printf(" Du er mellom 20 og 30 år gammel \n");
else
printf(" Du er ikke mellom 20 og 30 år gammel \n");

return 0;
}*/

// Program for porto "oppgave 10b"

#include <stdio.h>
#include <stdlib.h>



int main(){


int tall = 0;
int vekt = 0;
float pris = 0;

/*printf("Tast inn vekten på brevet: \n");
scanf(" %d", &vekt);
do*/
{


/*if (vekt < 20 && tall==1)
 pris = 4.20;

else if(vekt > 20 && vekt < 50 && tall==1)
 pris = 6.30;

else if(vekt > 50 && vekt < 100 && tall==1)
pris = 8.0;
else if(vekt > 100 && vekt < 250 && tall==1)
pris = 15;
else if(vekt < 250 && vekt > 500 && tall==1)
pris = 26.5;
else (vekt > 500 && vekt < 1000 && tall==1);
pris = 42;
//else (vekt > 1000); printf("Dette brevet er for tungt og kan ikke sendes!\n");

 /*printf("Vi tilbyr 2 typer post tjenester hos, A eller B\nHvilken type tjeneste ønsker du å bruke?\nTast inn 1 for A og 2 for B: ");

    scanf(" %d", &tall, &vekt);
if(tall==1)
printf( "Takk! =D Dette brevet skal sendes som A-post\nDu må betale kr %f", pris);
else if (tall==2)
printf("Takk! =D Dette brevet skal sendes som B-post\nDu må betale kr. 3.60\n");
else printf("Vi selger ikke denne tjenesten\nDette brevet må du du levere selv\n\n");

} while (tall!=1 && tall != 2);*/


printf("Vi tilbyr 2 typer post tjenester hos, A eller B\nHvilken type tjeneste ønsker du å bruke?\nTast inn 1 for A og 2 for B: ");

    scanf("%d", &tall);
if(tall==1)
printf( "Takk! =D Dette brevet skal sendes som A-post\nDu må betale kr 4.20");
else if (tall==2)
printf("Takk! =D Dette brevet skal sendes som B-post\nDu må betale kr. 3.60\n");
else printf("Vi selger ikke denne tjenesten\nDette brevet må du du levere selv\n\n");

} while (tall!=1 && tall != 2);
}
