#include <stdio.h>

int main() {



float paaKonto=0, utAvKonto;

printf("Skriv inn belop som er paa konto\n");

scanf(" %f", &paaKonto);

printf("\nHvor mye ønsker du å ta ut av konto\n");

scanf(" %f", &utAvKonto);

printf("Det står da igjen %.2f på konto\n", paaKonto-utAvKonto);

getchar();

return 0;
}
