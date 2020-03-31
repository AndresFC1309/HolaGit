#include <stdio.h>#include<stdio.h>
#include<conio.h>
#include<math.h>


void main(){
    print("hello world");
    return 0;
}

void main ()
{
  float numero,seno,coseno,tangente;
  clrscr();
  numero=2*Pi;
  seno=sin(numero);
  coseno=cos(numero);
  tangente=tan(numero);
  printf("Los valores son:\nSeno:%f\nCoseno:%f\nTangente:%f",seno,coseno,tangente);
  getch();
}