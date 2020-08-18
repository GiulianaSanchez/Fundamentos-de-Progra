#include <iostream>

using namespace std;

int main()
{
    cout<<"Cálculo de Salario"<<endl; 
    float salario, jornal, dias;
    cout<<"Ingrese la cantidad de dias"<<endl;
    cin>>dias;
    cout<<"El monto del jornal: "<<endl;
    cin>>jornal;
    salario = jornal*dias;
    cout<<"El salario es: "<<endl<<salario; 
    
    return 0;
}
