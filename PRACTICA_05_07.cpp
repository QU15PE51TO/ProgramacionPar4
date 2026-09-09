// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 08/09/2026
#include <iostream>
using namespace std;
void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota)
{
    sumaTotal=sumaTotal+nuevaNota;
    cantidadNotas=cantidadNotas+1;
}
int main ()
{
double sumaTotal=0;
int cantidadNotas=0;
double nuevaNota;
int N;
cout << "Ingrese la cantidad de notas que quiere ingresar: "<<endl;
cin >> N;
for (int i=1;i<=N;i++)
{
    cout << "Introdusca la nueva nota"<< endl;
    cin >> nuevaNota;
    agregarNota(sumaTotal,cantidadNotas,nuevaNota);
}
cout << "La suma total es: "<<sumaTotal<<endl;
cout << "la cantidad de notas es: "<<cantidadNotas<<endl;
return 0;
}