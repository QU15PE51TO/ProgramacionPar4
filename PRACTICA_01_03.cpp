//Materia: Programacion 1 paralelo 4
//Autor: Quispe Mamani Kevin Javier
//Carrera del estudiante: ingenieria mecatronica
//Fecha de creacion: 15/08/2026
#include <iostream>
using namespace std;
int main()
{
    int edad;
    cout << "introduce tu edad: ";
    cin >> edad;
    int sexo;
    string genero;
    cout << "Selecciona un genero"<<endl;
    cout << "selecciona 1 para masculino"<< endl;
    cout << "selecciona 2 para femenino"<< endl;
    cin >> sexo;
    switch(sexo)
    {
        case 1:
        genero = "Masculino";
        break;
        case 2:
        genero = "Femenino";
        break;
        default:
        cout << "eres trans o que";
    }
    int altura;
    cout<< "introduce tu altura: ";
    cin >> altura;
    cout << "Tu edad es: "<< edad<< endl;
    cout << "Tu genero es: "<< genero<< endl;
    cout << "Tu altura es: "<< altura<< " cm" << endl;
    return 0;
}