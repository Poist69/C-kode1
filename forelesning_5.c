/*#include <stdio.h>

int main(void){

int i = 0;
    for (i=0; i < 10; i+=2){
     printf("i=%d\n", i);
     printf("Dette er en for loop\n");
    }
}*/

/*#include <stdio.h>

int main(void){
 
 int i=0;

    while(i < 10){
     printf("i=%d\n", i);
        i++;
        if(i==5) printf("if i=5\n");
        (i==6) ?printf("taller er 6\n"):printf("taller er ikke 6\n");
    }



}*/

/*#include <stdio.h>

int main(void){
 
 int i=5;

    do {
     printf("i=%d\n", i);
        i++;
        if(i==5) printf("if i=5\n");
        (i==6) ?printf("taller er 6\n"):printf("taller er ikke 6\n");
     
    }while(i < 10);
    



}*/


/*#include <stdio.h>

int main(){
 enum operativsystem {U=0,W=11,L=3};     // Definerer oppramsingstypen
 enum operativsystem os;         // Definerer variabel
 os = W;                         // ?Tilordner variablen en verdi

    //if(os==L) printf("linux\n");

    switch(os){                  // !Anvender verdien 
        case L:printf("Linux: %d\n", os); break;
        case W:printf("Windows: %d\n", os); break;
        default:printf("Annet: %d\n", os); break;
    }


}*/

#include <math.h>
#include <stdio.h>
struct sylinder
 {
    float radius;
    float hoyde;
 };
 int tall(struct sylinder);

int main(){

 
 struct sylinder s1, s2;
 s1.hoyde=1.5;
 s1.radius=2.0;

 s2.hoyde=2.5;
 s2.radius=4.0;

 printf("Sylider har volum %f\n", s1.radius*s1.radius*3.14*s1.hoyde);
 printf("Sylider har volum %f\n", s2.radius*s2.radius*3.14*s2.hoyde);
 tall(s1);

} 
//!Her overføres verdier ut av main ved hjelp av global "struct"
int tall(struct sylinder a)
{
  printf("radius er %f\n", a.radius);
}
  