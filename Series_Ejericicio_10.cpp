/************************************************************
Calcular la siguiente serie:
S= X/1! -  X^3/3! + X^5/5! - .......(+/-)X^n/n!;  n es impar
************************************************************/

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include "conio.h"

using namespace std;

int main() 
{
   int i, n, p, fact=1; //factorial
   float x, suma;
   cout<<"Ingrese el limite de la serie: "<<endl;
   cin>>n;
   cout<<"Ingrese el numerador: "<<endl;
   cin>>x;
   i=1; //contador
   suma=0; //acumulador
   p=1; //signo cambiante
   while (i<=n) //no necesita iniciar en for int(i=1; i<=n, i++)
   {
	   fact=fact*i; //acumulador de producto
	   if (i%2!=0) //si i es impar
	   {
		   suma=suma+p*pow(x, i)/fact; //acumular suma=suma+xx
		   p=p*(-1); //p=-p
	   }
	   i++; //no es necesario si utiliza for
   }
   cout<<"La suma de la serie es: "<<suma<<endl;
   getch();
return 0;
 }
	
