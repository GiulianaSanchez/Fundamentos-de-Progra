/************************************************************
Suma de los números pares comprendidos entre 1 y N.
	S=1+3+5+⋯…………+N 
************************************************************/

#include <iostream>


using namespace std;

int main ()
{	
	int suma=0, n=0;
	cout<<"Ingrese el valor de 'n': "<<endl;
	cin>>n;
	for(int i=2;i<=n;i=i+2){
		suma=suma+i;
	}
	cout<<"La suma de los pares es: "<<suma<<endl;
	return 0;
}
