/*	
	Se tiene la siguiente información:
	1)	Nombre de 4 Empleados.
	2)	Ingresos en concepto de sueldo, cobrado por cada 
	empleado en los 3 meses.

	Confeccionar el siguiente programa:
	a)	Realizar la carga de información mencionada.
	b)	Generar un vector que contenga el ingreso acumulado
	en sueldos en los últimos 3 meses para cada empleado.
	c)	Mostrar en pantalla el total pagado en sueldos a
	todos los empleados en los últimos 3 meses.
	d)	Obtener el nombre del empleado que tuvo el mayor
	ingreso acumulado.

	Empleados	|	 Sueldos	  |		sueldostot
	----------------------------------------------------
	Marcos		| 540 | 540	| 760 |
	Ana			| 200 | 220	| 250 |
	Luis		| 760 |	760	| 760 |
	María		| 605 |	799	| 810 |
*/

#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include <string>
#define MAX 100

using namespace std;

void CargarEmpleados(string empleados[], float sueldos[4][3]);
void CargarSueldos(string empleados[], float sueldos[4][3]);
void CalcularSuma(string empleados[], float sueldos[4][3], float sueldostot[4]);
void Mostrar(string empleados[], float sueldos[4][3]);
void SueldosTotales(string empleados[], float sueldos[4][3], float sueldostot[4]);
void MostrarMAyorSueldo(string empleados[], float sueldos[4][3], float sueldostot[4]);

int main()
{
	string empleados[4];					//vector
	float sueldos[4][3], sueldostot[4];	//matriz
	//int n;
	cout<<"Empleados y sueldos."<<endl;
	cout<<endl;
	//cout<<"Ingrese la cantidad de empleados: ";
	//cin>>n;			//filas 4

	CargarEmpleados(empleados, sueldos);
	CargarSueldos(empleados, sueldos);
	Mostrar(empleados, sueldos);
	CalcularSuma(empleados, sueldos, sueldostot);
	SueldosTotales(empleados, sueldos, sueldostot);
	MostrarMAyorSueldo(empleados, sueldos, sueldostot);
	
	return 0;
	getch ();
}

void CargarEmpleados(string empleados[], float sueldos[4][3])
{
	for(int i=0; i<4; i++)		//n = filas = 4
	{
		cout<<"Ingrese los nombres de los empleados: "<<endl;
		getline(cin, empleados[i]);
		/*for (int j=0; j<3; j++)	// columnas = 3
		{
			cout<<"Ingrese los sueldos sueldo["<<j<<"]: "<<endl;
			cin>>sueldos[i][j];

		}*/
	}
}
void CargarSueldos(string empleados[], float sueldos[4][3])
{
	for(int i=0; i<4; i++)		//n = filas = 4
	{
		for (int j=0; j<3; j++)	// columnas = 3
		{
			cout<<"Ingrese los sueldos sueldo["<<i<<"]["<<j<<"]: "<<endl;
			cin>>sueldos[i][j];
			cout<<endl;
		}
	}
}

void Mostrar(string empleados[], float sueldos[4][3])
{
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<sueldos[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void CalcularSuma(string empleados[], float sueldos[4][3], float sueldostot[4])
{
	
	for(int i=0; i<4; i++)
	{
		float suma=0;
		for(int j=0; j<3; j++)
		{
			suma=suma+sueldos[i][j];
		}
		sueldostot[i]=suma;
	}
}

void SueldosTotales(string empleados[], float sueldos[4][3], float sueldostot[4])
{
	cout<<"Los sueldos totales de 3 meses son: "<<endl;
	for(int i=0; i<4; i++)
	{
		cout<<empleados[i]<<" - "<<sueldostot[i]<<endl;
	}
	cout<<"--------------------------------------------------"<<endl;
}

void MostrarMAyorSueldo(string empleados[], float sueldos[4][3], float sueldostot[4])
{
	float mayor=0;
	int p=0;
	for(int i=0; i<4; i++)
	{
		if(sueldostot[i]>mayor)
		{
			mayor=sueldostot[i];
			p=i;
		}
	}
	cout<<"El mayor sueldo es de "<<empleados[p]<<" con "<<mayor<<endl;
}
