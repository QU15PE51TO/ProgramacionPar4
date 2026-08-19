//Materia: Programacion 1 paralelo 4
//Autor: Quispe Mamani Kevin Javier
//Carrera del estudiante: ingenieria mecatronica
//Fecha de creacion: 15/08/2026
#include <iostream>
using namespace std;
int main()
{
    int dia;
    string semana;
    cout << "introduce un numero del 1 al 7 "<<endl;
    cout << "para sacar un dia de la semana"<< endl;
    cin >> dia;
    switch (dia)
    {
        case 1:
        semana = "Lunes";
        break;
        case 2:
        semana = "Martes";
        break;
        case 3:
        semana = "Miercoles";
        break;
        case 4:
        semana = "Jueves";
        break;
        case 5:
        semana = "Viernes";
        break;
        case 6:
        semana = "Sabado";
        break;
        case 7:
        semana = "Domingo";
        break;
        default:
        cout << "Error 404";
        break;
    }
    cout << "El dia de la semana es: "<< semana<< endl;
    return 0;
}