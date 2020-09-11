/************************************************************
Ejercicio 2 - Práctico 2
Suma de los números enteros impares comprendidos entre 1 y N.
	S=1+3+5+⋯…………+N 
************************************************************/

#include <iostream>


using namespace std;

int main ()
{	
	int suma=0, n=0;
	cout<<"Ingrese el valor de 'n': "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	
		if(i%2!=0)
		suma=suma+i;
		
	
	cout<<"La suma de los impares es: "<<suma<<endl;
	return 0;
}
