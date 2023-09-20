#include "stdio.h"
#include "stdlib.h"

int main()  { 
  int fodsels_aar;                   //Året du ble født 
  int alder;                         //Hvor gammel er du nå
  int dette_aaret = 2023;            //Dette året

printf("Hei hvor gammel er du? (eks 30):");
scanf(" %d", &alder);
fodsels_aar = dette_aaret - alder;
printf("Du er født i %d", fodsels_aar);

getchar();

return 0;

}
