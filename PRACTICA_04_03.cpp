// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
int A;
int B;
double pi = 3.14159;
int Cilindro (int A,int B)
{
    int cilindro;
    cilindro = pi*A*A*B;
    return cilindro;
}
int main ()
{
    cout << "Introdusca el radio: "<<endl;
    cin>>A;
    cout << "Introdusca la altura: "<<endl;
    cin>>B;
    cout << "El area es: "<<Cilindro(A,B)<<endl;
    return 0;
}