#include <iostream>

using namespace std;

int main()
{
    float Libras;
    float Chelines;
    float Peniques;
    float Dollar;
    cout<<"Ingrese las libras a convertir: ";
    cin >> Libras;
    
    Chelines = Libras * 20;
    Peniques = Chelines * 12;
    Dollar = (Peniques * 2.80)/240;
    
    cout<<"La cantidad de chelines es: "<<Chelines<<"\n";
    cout<<"La cantidad de peniques es: "<<Peniques<<"\n";
    cout<<"La cantidad de dollares es: "<<Dollar;
    return 0;
}