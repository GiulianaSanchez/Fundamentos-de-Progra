
//Por variable de control
//#include "stdafx.h"
#include "conio.h"
#include <iostream>

using namespace std;

int main(void)
{ 
	int i,id,n,np,ef,p1,p2,p3;
	float nf;
	cout<< " ID: ";
	cin>> id;
	
	while (id!=-999) //se detiene cuando se ingresa un valor no esperado 
	{
		
		cout<< " Introduzca la nota practica: " ;
	    cin>> np;
		cout<< " Introduzca la nota de los tres parciales: " ;<<endl;
	    cin>> p1;
		cin>> p2;
		cin>> p3;
		cout<< " Introduzca la nota del examen final: ";
	    cin>> ef;
		nf=np*0.2+((p1+p2+p3)/3)*0.4+ef*0.4;
		cout<< " La nota final es: "<< nf<<endl;
		cout<< " ID: ";
	    cin>> id;
	}
	getch();
}
