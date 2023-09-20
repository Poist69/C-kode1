#include <stdio.h>
#include <stdlib.h>

void infoTilBruker(void);
int meny(void);
float switchcasemetode(int valg);
void celsiusToKelvin(void);
void fahrenheitToCelsius(void);
void celsiusToFahrenheit(void);
void kelvinToCelsius(void);

 int main(){
  int valg = 0;
  //Clear screen
    system("clear"); 
  //Calling info function   
     infoTilBruker();
     getchar();
     system("clear");
     valg = meny();
     if (valg == -1) return 0;
     printf("Du har valgt: %d.\n", valg);

     switchcasemetode(valg);

     return 0;
     
  

}



  // 1a, Adding info function 
    void infoTilBruker(void){
     printf("Dette programmet skal utføre temperatur konvertering,\nmellom Celsius, Kelvin og Fahrenheit\nTrykk enter for å fortsette");
    }

  // 1b, Adding menu function
    int meny(void){
      int valg;
        printf("1. Konvertere temperatur fra Celsius til Kelvin\n");
        printf("2. Konvertere temperatur fra Kelvin til Celsius\n");
        printf("3. Konvertere temperatur fra Celsius til Farenheit\n");
        printf("4. Konvertere temperatur fra Farenheit til Celsius\n");
        printf("5. For å avslutte\n");
        printf("Velg en av alternativene ovenfor ");
        scanf("%d", &valg);

        if(valg > 5 || valg < 1 ){
          printf("Ugyldig valg prøv på nytt\n");
           meny();
        }
        else if (valg == 5){
          return -1;
        }
        else return valg;
    }
      // Adding switch
    float switchcasemetode(int valg){
      switch(valg){
      case 1: celsiusToKelvin();
        break; 
      case 2: kelvinToCelsius();
        break; 
      case 3: celsiusToFahrenheit();
        break; 
      case 4: fahrenheitToCelsius();
      break;
      default: printf("ugyldig verdi\n");
      }
    }
   

   
   //Adding function celsius to kelvin
  void celsiusToKelvin(void){
    float celsius;
      
    printf("Tast inn temperatur i Celsius:");
    scanf("%f", &celsius);
    float Celsius2Kelvin = celsius + 273.15;   
    printf("Temperaturen %.2f i celsius tilsvarer %.2f i Kelvin\n",celsius, Celsius2Kelvin);
          
  }


       //Adding fuction kelvin to celsius
  void kelvinToCelsius(void){
    float kelvin;
    

      printf("Tast inn temperatur i Kelvin:");
      scanf("%f", &kelvin);
      float Kelvin2Celsius = kelvin - 273.15;
      printf("Temperaturen %.2f i kelvin tilsvarer %.2f i Celsius\n",kelvin, Kelvin2Celsius);
  }


        //Adding function celsius to farenheit
  void celsiusToFahrenheit(void){
    float celsius;
    

    printf("Tast inn temperatur i Celsius:");
    scanf("%f", &celsius);
    float Celsius2Farenheit = celsius *(9/5) + 32;
    printf("Temperaturen %.2f i celsius tilsvarer %.2f i farenheit\n", celsius, Celsius2Farenheit);

  }


       //Adding function farenheit to celsius
  void fahrenheitToCelsius(void){
    float farenheit;
    

    printf("Tast inn temperatur i Farenheit:");
    scanf("%f", &farenheit);
    float Farenheit2Celsius = farenheit - 32*5/9;
    printf("Temperaturen %.2f i farenheit tilsvarer %.2f i celsius\n", farenheit, Farenheit2Celsius);
    
  }    