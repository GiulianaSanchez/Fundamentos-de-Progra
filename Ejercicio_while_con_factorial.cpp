/******************************************************************************

Hacer un programa, diagrama de flujo, pseudocodigo y c++ para calcular el factorial
de un numero.

Contador
i=0 //Incializar de acuerdo a la operación
i=i+1;

Acumulador
facto=1; //neutro de producto
facto=facto*i;

i, numero, facto pertenecen a enteros. 

*******************************************************************************/

#include <iostream>
#include "conio.h"

using namespace std;

int main(void)
{
    int i, facto, numero; 
    i=1;
    facto=1;
    cout<<"Ingresar el número: ";
    cin>>numero;
    while (i<=numero)
{
    facto=facto*i;
    i=i+1;
}
    cout<<"El valor factorial de: "<<numero<<" es "<<facto;
    getch();
    //return 0;
}

