/**4.-Deducir el salario neto de un trabajador a partir de la lectura del nombre, 
 * horas trabajadas al mes, precio por hora, sabiendo que todo lo que se descuenta 
 * es un impuesto  RC-IVA de 13% sobre el salario bruto.  Los trabajadores que  ganan 
 * más de 8.272 bolivianos están obligados a  pagar el impuesto al Régimen 
 * Complementario al Impuesto al Valor Agregado (RC-IVA).  
/**/

 
#include <iostream>

using namespace std;

int main()
{
    float horas_trabajadas, precio_hora,salario_bruto,salario_neto,descuenta; 
    string nombre; 
    
    cout<<"Ingrese nombre del trabajador: "<<endl;
    cin>>nombre;
    //cout<<"Ingrese el salario básico: "<<endl;
    //cin>>salario_basico;
    cout<<"Ingrese el número de horas trabajadas al mes: "<<endl; 
    cin>>horas_trabajadas;
    cout<<"Ingrese el precio por hora: "<<endl; 
    cin>>precio_hora;
    salario_bruto = horas_trabajadas*precio_hora;
    cout<<"El Salario bruto será de: "<<salario_bruto<<" Bs."<<endl;
    descuenta = salario_bruto*0.13;
    salario_neto = salario_bruto-descuenta;
    cout<<"El salario neto será de: "<<salario_neto<<" Bs."<<endl;
    
    
    return 0;
}

