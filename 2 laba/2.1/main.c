#include <math.h>
#include <stdio.h>

int main (){
    int a, b;
    float dobukub, zalushok, dilennia;
    printf("\nVedit pershe cile chuslo: ");
    scanf("%d",&a);
    printf("\nVedit druge chislo cile chuslo: ");
    scanf("%d", &b);
 dobukub = pow(a*b,3);
 zalushok = fmod((double)b,(double)a);
 dilennia = (float) b/a;
 dilennia = floor(dilennia);
 printf("\ndobutok u kubi: %f",dobukub);
 printf("\nzalushok vid dilennia: %.0f", zalushok);
 printf("\ncile vid dilennia: %.0f\n\n", dilennia);
 return 0;
}