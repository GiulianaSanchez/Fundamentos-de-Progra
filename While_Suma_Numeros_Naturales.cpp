/******************************************************************************

Realizar un programa para sumar los primeros numeros naturales utilizando 
while.

*******************************************************************************/
#include <iostream>
#include "conio.h"

using namespace std;

int main ()
{
    
    cout<<"Sumar primeros numeros naturales"<<endl;
    int n, i, suma;
    cout<<"Escriba la cantidad de números que desea sumar."<<endl;
    cin>>n;
    i=0;
    suma=0;
    while (i<n)
    {
        i=i+1;
        suma=suma+i;
       
    }
    cout<<"La suma es de: "<<suma<<endl;
getch();
}
