// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
int N;
int digito (int N)
{
    int digito=0;
    while (N>0)
    {
        N=N/10;
        digito++;
    }
    return digito;
}
int main ()
{
    cout << "Introdusca un numero entero: "<<endl;
    cin>>N;
    cout << "La cantidad de digitos es: "<<digito(N)<<endl;
    return 0;
}