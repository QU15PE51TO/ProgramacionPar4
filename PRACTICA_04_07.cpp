// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 01/09/2026
#include <iostream>
using namespace std;
int velocidad;
int tiempo;
int distancia (int V,int T)
{
    int Distancia;
    Distancia = V*T;
    return Distancia;
}
int main ()
{
    cout << "Introdusca la velociadad: "<<endl;
    cin>>velocidad;
    cout << "Introdusca el tiempo: "<<endl;
    cin>>tiempo;
    cout << "La distancia es: "<<distancia(velocidad,tiempo)<<"mts"<<endl;
    return 0;
}