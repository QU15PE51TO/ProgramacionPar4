//Materia: Programacion 1 paralelo 4
//Autor: Quispe Mamani Kevin Javier
//Carrera del estudiante: ingenieria mecatronica
//Fecha de creacion: 15/08/2026
#include <iostream>
using namespace std;
int main ()
{
    int nota;
    cout << "ingrese una nota del 0 al 100"<< endl;
    cin >> nota;
    while(nota > 100||nota <0 )
    {
        cout << "ingrese de nuevo la nota: "<< endl;
        cin >> nota;
    }
    cout << "nota registrada"<< endl;
    return 0;
}