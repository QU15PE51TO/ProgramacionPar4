#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int numero;
    int intentos=0;
    int aleatorio;
    int max=100;
    int min=1;
    cout<< "ingrese un numero: ";
    cin >> numero;
    srand(time(0));
    do
    {
        aleatorio=(rand()%(max-min+1))+min; 
        intentos++;
        if(aleatorio>numero)
        {
            cout << aleatorio << "es mayor a "<< numero<<endl;
        }
        else if(aleatorio<numero)
        {
            cout<< aleatorio<< "es menor a "<< numero<<endl;
        }
    }
    while (aleatorio != numero);
    cout << aleatorio << "es igual a "<< numero<<endl;
    cout << "el total de intentos es: "<<intentos<<endl;
    return 0;
}