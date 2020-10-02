
#include "stdafx.h"
#include "math.h"
#include<iostream>  ////S= X/1! - X^3/3! + X^5/5! -X^i/i! .......(+/-)X^n/n!; n es impar
#include<conio.h>

using namespace std;

int fact(int cont); //prototipos
float suma(float x, int num);

int main ()
{ 
	int i,n,p,fac=1; // fac es factorial
	float x,sum;
	cout<<"ingresar el limite de la serie: "<<endl;
	cin>>n;
	cout<<"ingresar el numerador: "<<endl;
	cin>>x;
    sum = suma(x,n);                          //Llamada a la función
	cout<<"La suma de la serie es: "<<sum;  //cout<<"La suma de la serie es: "<<suma(x,num); 
	getch();
	return 0;
}

int facto(int cont)
{
	int i=1,fac=1; // se puede empezar en 2?
	while(i<=cont)  // no necesita iniciar el i for (int i=1;i<=n;i++)
	{
		fac=fac*i; //acumulador de producto
		i++;
	}
	
	return fac;
}

float suma(float x, int num)
{
	int i, p;
	float sum;
	i=1; //contador
	sum=0; // acumulador
	p=1; //signo
	while(i<=num)  // no necesita iniciar el i for (int i=1;i<=n;i++)
	{
		if (i%2!=0) //si i es impar
		{
			float x2=facto(i);
			sum=sum+p*pow(x,i)/x2;  //acumular suma = suma + XXX;
			p=p*(-1); //p=-p;
		}
		i++; // no es necesario si utiliza for
	}
	return sum;
}
