#include <iostream>

using namespace std;

int main()
{
    int Suma;
    int Producto;
    int Numeros[5] = {16,17,18,19,20}; 
    int Contador = 15;
    int Contador2 = 0;
    int Contador3 = 0;
    
    for(Contador;Contador<21;Contador++)
    {
        switch ( Contador ) 
        {
            case 16:
            Numeros[0]=15;
            Numeros[1]=17;
            break;
            
            case 17:
            Numeros[1]=16;
            break;
            
            case 18:
            Numeros[2]=17;
            break;
            
            case 19:
            Numeros[3]=18;
            break;
            
            case 20:
            Numeros[4]=19;
            break;
        }
        while(Contador2<5)
        {
            Suma = Contador + Numeros[Contador3];
            Producto = Contador * Numeros[Contador3];
            cout<<Contador<<"+"<<Numeros[Contador3]<<"="<<Suma<<"\n";
            cout<<Contador<<"*"<<Numeros[Contador3]<<"="<<Producto<<"\n";
            cout<<"\n";
            Contador2++;
            Contador3++;
        }
        Contador2 = 0;
        Contador3=0;
    }
    
    return 0;
}