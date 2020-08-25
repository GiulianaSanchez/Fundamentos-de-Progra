
#include <iostream>
#include "conio.h"
#include "math.h"

using namespace std;
//int main(void)
int main()
{
   cout<<"Calcular la ecuación cuadrática."<<endl;
   cout<<"Ax2+Bx+C=0"<<endl;
   
   float a, b, c, d, x1, x2, xr, xi, x;
   cout<<"Ingresa a: "<<endl;
   cin>>a;
   cout<<"Ingresar b: "<<endl;
   cin>>b;
   cout<<"Ingresar c: "<<endl;
   cin>>c;
   if (a!=0) //a es diferente de 0.
   {
        d=pow(b,2)-4*a*c;
        if (d==0) //d es diferente de 0.
            cout<<"Solución única: "<<-b/(2*a);
        else 
        
            if (d>0) 
            {
                x1=(-b+sqrt(d))/(2*a);
                x2=(-b-sqrt(d))/(2*a);
                cout<<"Soluciones reales: x1= "<<x1<<" x2= "<<x2<<endl;
            }
            else 
            {
                xr=-b/(2*a);
                xi=sqrt(-d)/(2*a);
                cout<<"Soluciones imaginarias: "<<endl;
                cout<<"x1= "<<xr<<" + "<<xi<<"i";
                cout<<"x2= "<<xr<<" - "<<xi<<"i";
            }
        
    }
    else 
            cout<<"No tiene solución.";
    }    
