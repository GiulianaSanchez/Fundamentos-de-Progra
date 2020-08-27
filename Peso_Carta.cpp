/******************************************************************************

11.	Dado el peso P en gramos de una carta; haga un programa para calcular el 
costo de enviar la carta, de acuerdo a la siguiente tabla:

Si 	0  < P < 50		entonces costo Bs. 1.50
Si 	50 < P <= 100	entonces costo Bs. 4.00
Si 	100 < P <= 200	entonces costo Bs. 6.00
Si 	200 < P <= 350	entonces costo Bs. 10.50
Si 	350 < P <= 500 	entonces costo Bs. 15.00
Si 	P  > 500 		entonces mensaje 'NO PUEDE ENVIAR COMO CARTA'

*******************************************************************************/

#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
    cout<<"Costo de envío en base al peso de la carta"<<endl;
    
    int P, T;
    cout<<"Ingrese el peso de su carta: ";
    cin>>P;
    
    if (P<=0)
        cout<<"Error";
    else 
        if (P<50)
            cout<<"El costo es de Bs. 1.50"<<endl;
        else 
            if (P<=100)
                cout<<"El costo es de Bs. 4"<<endl;
            else
                if (P<=350)
                    cout<<"El costo es de Bs. 10.50"<<endl;
                else 
                    if (P<=500)
                        cout<<"El costo es de Bs. 15"<<endl;
                    else
                        cout<<"No se puede enviar como carta."<<endl; 
    

    return 0;
}
