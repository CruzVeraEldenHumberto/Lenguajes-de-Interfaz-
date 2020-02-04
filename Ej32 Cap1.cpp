#include <iostream>

using namespace std;

int main()
{
    int Numero;
    cin >> Numero;
    
    if((Numero % 2) == 0 && (Numero % 5) == 0)
    {
        cout<<"El numero es divisible entre 2 y 5";
    }
    else
    {
        cout<<"El numero no es divisible entre 2 y 5";
    }
    return 0;
}