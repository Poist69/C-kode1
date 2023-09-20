#include "stdio.h"

int tall = 0;
int vekt = 0;
float pris = 0;

int main()
{

printf("Velg 1 for A-post\nVelg 2 for B-post\n:");
scanf(" %d", &tall);
switch(tall) 
{
  case 1  : {printf("Du har valgt A-post\nPrisene for A-post er:\nUnder 20 Kilo: kr 4.30\nMellom 20 og 50 Kilo: 6.0\n");break;
             } 
  case 2 : printf("Du har valgt B-post\n"); break;
  default :  printf("Du har tastet inn ett ugyldig valg\n");

}

printf("Tast 1 for under 20 kilo\nTast 2 for mellom 20 og 50 kilo\n");
scanf("%d", &vekt);

if(vekt==1) printf("Du har valgt å sende brev under 20 kilo med A-post!\n");
  else if(vekt==2) printf("Du har valgt å sende brev mellom 20 og 50 kilo med A-post!\n");
  else printf("Du har gjort ett ugyldig valg\n");
