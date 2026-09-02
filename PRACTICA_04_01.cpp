// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 01/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int A;
int B;
int triangulo (int A,int B)
{
    int Triangulo;
    Triangulo= (A*B)/2;
    return Triangulo;
}
int main ()
{
    cout << "Introdusca la altura: "<<endl;
    cin>>A;
    cout << "Introdusca la base: "<<endl;
    cin>>B;
    cout << "El area es: "<<triangulo(A,B)<<endl;
    return 0;
}