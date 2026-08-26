// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 22/08/2026
#include <iostream>
using namespace std;
int main ()
{
    int factorial=1;
    int suma=0;
    int numero;
    cout << "Introduce un numero: ";
    cin >> numero;
    for (int n=1;n<=numero;n++)
    {
        factorial=factorial*n;
        suma=suma+factorial;
    }
    cout << "La suma de los factoriales es: "<< factorial<<endl;
    return 0;
}