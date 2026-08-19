//Materia: Programacion 1 paralelo 4
//Autor: Quispe Mamani Kevin Javier
//Carrera del estudiante: ingenieria mecatronica
//Fecha de creacion: 15/08/2026
#include <iostream>
using namespace std;
int main()
{
    double practicas; 
    double teorica;
    double participacion;
    double notafinal;
    cout << "introduce la nota de practicas"<<endl;
    cin >> practicas;
    cout << "introduce la nota de teorica"<<endl;
    cin >> teorica;
    cout << "introduce la nota de participacion"<<endl;
    cin >> participacion;
    notafinal = practicas*0.3 + teorica*0.6 + participacion*0.1;
    cout << "La nota final es: "<< notafinal;
    return 0;
}