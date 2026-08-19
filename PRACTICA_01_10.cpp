//Materia: Programacion 1 paralelo 4
//Autor: Quispe Mamani Kevin Javier
//Carrera del estudiante: ingenieria mecatronica
//Fecha de creacion: 15/08/2026
#include <iostream>
using namespace std;
int main ()
{
    int numero;
    string mes;
    cout << "introduce un numero del 1 al 12 "<<endl;
    cout << "para sacar un dia del mes"<< endl;
    cin >> numero;
    switch (numero)
    {
        case 1:
        mes = "Enero";
        break;
        case 2:
        mes = "Febrero";
        break;
        case 3:
        mes = "Marzo";
        break;
        case 4:
        mes = "Abril";
        break;
        case 5:
        mes = "Mayo";
        break;
        case 6:
        mes = "Junio";
        break;
        case 7:
        mes = "Julio";
        break;
        case 8:
        mes = "Agosto";
        break;
        case 9:
        mes = "Septiembre";
        break;
        case 10:
        mes = "Octubre";
        break;
        case 11:
        mes = "Noviembre";
        break;
        case 12:
        mes = "Diciembre";
        break;
        default:
        cout << "Error 404";
        break;
    }
    cout << "El mes que escogiste es: "<< mes<< endl;
    return 0;
}