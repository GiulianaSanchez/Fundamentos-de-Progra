/******************************************************************************

Prácitca #1
Escriba un programa que pida al usuario tres números enteros entre 0 y 10 (inclusive).
El programa debe verificar que los números están en el rango correcto, y en ese caso 
imprimir el promedio de los números. En caso contrario debe imprimir un mensaje de error
indicando cuál de los números está fuera de rango.

*******************************************************************************/
#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void main()
{
    int a, b, c;
    float p;
    cout<<"Ingrese el primer valor "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo valor"<<endl;
    cin>>b;
    cout<<"Ingrese el tercer valor "<<endl;
    cin>>c;
    if ((a>=0)&&(a<=10))
        if ((b>=0)&&(b<=10))
            if ((c>=0)&&(c<=10))
            {
                p=(a+b+c)/3.0;
                cout<<"El promedio es: "<<p;
            }
            else 
                cout<<"Error en: "<<c; 
        else 
            cout<<"Error en: "<<b; 
    else
        cout<<"Error en: "<<a; 
        
    getch()
   
}
