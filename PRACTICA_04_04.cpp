// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
int A;
double peso = 11.59;
double Dolares (int A)
{
    double Bolivianos=0;
    Bolivianos= A/peso;
    return Bolivianos;
}
int main ()
{
    cout << "Introdusca los Bolivianos: "<<endl;
    cin>>A;
    cout << "Su cambio es de: "<<Dolares(A)<<"Dolares"<<endl;
    return 0;
}