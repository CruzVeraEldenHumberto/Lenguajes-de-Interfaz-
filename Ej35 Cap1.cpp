
#include <iostream>
#include <math.h>  
using namespace std;

int main()
{
    int W;
    int X;
    int Y;
    int Z;
    int Resultado;
    int Resultado2;
    
    cout<<"Valor de W:";
    cin >> W;
    cout<<"Valor de X:";
    cin >> X;
    cout<<"Valor de Y:";
    cin >> Y;
    cout<<"Valor de Z:";
    cin >> Z;
    
    cout<<W<<"*"<<X<<"+"<<Y<<" = "<<Y<<"*"<<Z<<"-"<<Z;
    Resultado = (W*X) + Y;
    Resultado2 = (Y*Z)-Z;
    if(Resultado == Resultado2)
    {
        cout<<"\nEl resultado de la ecuacion es: "<<Resultado;
    }
    else
    {
        cout<<"Los miembros de la igualdad son distintos";
    }
    return 0;
}