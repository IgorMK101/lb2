#include <math.h>
#include <stdio.h>//biblioteku 

int main (){//zapusk programu
int x,y,z;
float t;//zmini
printf("Vedit cile chislo x: ");
scanf("%d",&x);
printf("Vedit cile chislo y: ");
scanf("%d", &y);
printf("Vedit cile chislo z: ");
scanf("%d", &z);
t= log2f((1-y)/(1+x))+ z;//formula
printf(" t = %.3f", t);
    return 0;
}//kinec programu