// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
int N;
int suma=0;
int Numero (int N)
{
    for(int i=1;i<=N;i++)
    {
        suma=suma+i;
    }
    return (suma);
}
int main ()
{
    cout << "Introdusca un numero: "<<endl;
    cin>>N;
    cout << "La suma de todos los numeros son: "<<Numero(N)<<endl;
    return 0;
}