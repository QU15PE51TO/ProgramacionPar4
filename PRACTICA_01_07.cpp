//Materia: Programacion 1 paralelo 4
//Autor: Quispe Mamani Kevin Javier
//Carrera del estudiante: ingenieria mecatronica
//Fecha de creacion: 15/08/2026
#include <iostream>
using namespace std;
int main ()
{
    int suma=0;
    int numero;
    int digito;
    int cantidad=0;
    cout << "introduce un numero: ";
    cin >> numero;
    while (numero > 0)
    {
        digito = numero % 10; 
        suma = suma + digito; 
        cantidad++;
        numero = numero / 10;
    }
    cout << "la suma de los digitos es: "<< suma<< endl;
    cout << "la cantidad de numeros son: "<< cantidad<<endl;
    return 0;
}