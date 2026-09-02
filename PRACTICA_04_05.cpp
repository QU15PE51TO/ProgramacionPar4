// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
int A;
bool Numero (int A)
{
    if (A %2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main ()
{
    cout << "Introdusca un numero: "<<endl;
    cin>>A;
    if (Numero(A))
    {
        cout << "Su numero es par"<< endl;
    }
    else 
    {
        cout << "Su numero es impar"<<endl;
    }
    return 0;
}