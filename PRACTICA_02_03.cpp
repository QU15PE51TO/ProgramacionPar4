// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 22/08/2026
#include <iostream>
using namespace std;
int main()
{
    int n;
    int suma=0;
    cout << "Introducir un numero: ";
    cin >> n;
    for (int i =1;i<=n;i++)
    {
        cout << i << endl;
        suma=suma+i;
    }
    cout<<"La suma total es: "<<suma<<endl;
    return 0;
}