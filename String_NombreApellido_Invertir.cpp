//Ejercicio de nombre y apellido.

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <string>								//Colocar la libreria.

using namespace std;

void main()
{
	string nombrecompleto, nombre, apellido;
	int longitud, espacio;
	cout<<"Ingrese el nombre: "<<endl;
	getline(cin,nombrecompleto);				//Se puede colocar cin, pero no tomaria en cuenta el espacio.
	//cout<<"Hola"<<nombrecompleto<<endl;		//Dice el nombre con apellido que ingrese (la linea completa), Giuliana Sanchez
	espacio=nombrecompleto.find(' ');			//Encuentra 1 elemento del string o linea.
	nombre=nombrecompleto.substr(0, espacio);	//Saber la longitud.
	longitud=nombrecompleto.length();
	apellido=nombrecompleto.substr(espacio, longitud-espacio);	//Sacar el apellido, Sanchez.
	//cout<<"Apellido: "<<apellido;

	nombrecompleto=apellido+' '+nombre;			//Sale invertido, Sanchez Giuliana.
	cout<<nombrecompleto;
	getch ();
}
