// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 22/08/2026

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "ingrese un numero: "<<endl;
    cin >> n;
    for(int i=1;i<=10;i++)
    {
        cout << n << "x" << i << "="<<n*i<<endl;
    }
    return 0;
}