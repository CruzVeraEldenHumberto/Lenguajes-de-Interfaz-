#include <iostream>
#include <math.h>  
using namespace std;

int main()
{
    int Numero;
    int Suma;
    int Numero2;
    Numero= pow(3,1974);
    Numero2 = pow(3,1975);
    Suma = Numero * 3;
    
    if(Suma == Numero2)
    {
        cout<<"Los numeros son iguales \n";
    }
    else
    {
        cout<<"Los numeros no son iguales \n";
    }
    cout<<Suma<<"\n";
    cout<<Numero2;
    return 0;
}