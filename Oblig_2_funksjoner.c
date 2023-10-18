//&program for drawing 20 random numbers out of 1000

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define antall 20



//*Prototypes
void trekktall(int tall_tabell[], int* peker_tabell[]);
void sorter(int* peker1, int* peker2);

//!Main function
int main()
{
//^Variables
int tall_tabell[antall];
int* peker_tabell[antall];
int temp=0;

trekktall(tall_tabell, peker_tabell);


 for(int i = 0; i < antall - 1 ;i++){
    for(int j = i + 1; j < antall; j++){
        if(*peker_tabell[i]>*peker_tabell[j]){
            sorter(peker_tabell[i], peker_tabell[j]);
        }
    
 }
    }
    printf("\x1b[34mSorterte tall: \x1b[0m \n");
    for (int i = 0; i < antall; i++) {
        printf("%d\n", *peker_tabell[i]);
    }
 
    return 0;
    }

 void sorter(int* peker1, int*peker2)
 {
    int temp = *peker1;
    *peker1 = *peker2;
    *peker2 = temp;

 }

void trekktall(int tall_tabell[], int* peker_tabell[])
{
    //int tall=0;
 srand(time(NULL));
    printf("\x1b[31mTall lagret i tabell:\x1b[0m \n");
    

    for(int i = 0; i < antall; i++){ 
        tall_tabell[i] = rand() % 1001;
        peker_tabell[i] = &tall_tabell[i];
        printf("%d\n", tall_tabell[i]);
        
    }
}

        
        
    