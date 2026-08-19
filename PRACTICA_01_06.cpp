//Materia: Programacion 1 paralelo 4
//Autor: Quispe Mamani Kevin Javier
//Carrera del estudiante: ingenieria mecatronica
//Fecha de creacion: 15/08/2026
#include <iostream>
using namespace std;
int main()
{
    int numero;
    cout << "introduce un numero"<< endl;
    cin >> numero;
    if (numero %2)
    {
        cout<< numero<< " tu numero es impar";
    }
    else
    {
        cout << numero <<" tu numero es par";
    }
    return 0;
}