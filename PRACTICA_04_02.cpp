// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
int A;
int B;
int C;
int Mayor (int A,int B,int C)
{
    int mayor=A;
    if(B>mayor)
    {
        mayor=B;
    }
    if(C > mayor)
    {
        mayor=C;
    }
    return mayor;
}
int main ()
{
    cout << "Introdusca el 1er numero: "<<endl;
    cin>>A;
    cout << "Introdusca el 2do numero: "<<endl;
    cin>>B;
    cout << "Introdusca el 2do numero: "<<endl;
    cin>>C;
    cout << "El mayor es: "<<Mayor(A,B,C)<<endl;
    return 0;
}