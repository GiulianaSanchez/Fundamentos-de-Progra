//	Realizar un programa que permita ingresar los nombres
//	de 5 operarios y sus sueldos respectivos. Mostrar el
//	sueldo mayor y el nombre del operario.

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <string>
#define MAX 100

using namespace std;
void Cargar(float vector[], string nombre[]);
void Mayor(float vector[], string nombre[]);

int main()
{
	float m, vector[100];
	string nombre[100];
	cout<<"Nombres y sueldos de operarios"<<endl;
	cout<<endl;
	
	Cargar(vector, nombre);
	Mayor(vector, nombre);

	getch(); 
	return 0;
}

void Cargar(float vector[], string nombre[])
{
	for(int i=0; i<5; i++)
	{
		cout<<"Ingrese los nombres de los operarios"<<endl;
		getline(cin, nombre[i]);
	}
	for(int i=0; i<5; i++)
	{
		cout<<"sueldo vector["<<i<<"] = ";
		cin>>vector[i];
	}
}

void Mayor(float vector[], string nombre[])
{
	float mayor=0;
    int j = 0;
	for(int i=0; i<5; i++)
	{
		if (vector[i]>mayor)
		{
			mayor=vector[i];
            j=i;
		}
	}
	cout<<"El mayor sueldo es: "<<mayor<<endl;
    cout << nombre[j] << endl;
}
