//Materia: Programacion 1 paralelo 4
//Autor: Quispe Mamani Kevin Javier
//Carrera del estudiante: ingenieria mecatronica
//Fecha de creacion: 15/08/2026
#include <iostream>
using namespace std;
int main()
{
    int anio;
    cout << "Introduce un anio: ";
    cin >> anio;
    if (anio %4==0)
    {
        cout << anio << " es anio bisiesto";
    }
    else
    {
        cout << anio << " no es bisiesto";
    }
    return 0;
}