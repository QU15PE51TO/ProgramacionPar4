// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 08/09/2026
#include <iostream>
using namespace std;
double cuadrado(double N)
{
    return N*N;
}
double rectangulo(double a,double b)
{
    return a*b;
}
float Circulo (float r, float PI)
{
    return PI*r*r;
}
int main()
{
    int LadoC;
    int Ladoa;
    int Ladob;
    int radio;
    cout << "Ingrese lado del cuadrado: "<<endl;
    cin >> LadoC;
    cout << "Ingrese la altura del rectangulo: "<<endl;
    cin >> Ladoa;
    cout << "Ingrese la base del rectangulo: "<<endl;
    cin >> Ladob;
    cout << "Ingrese el radio del circulo: "<<endl;
    cin >> radio;
    cout<< "El area de un cuadrado: "<<cuadrado(LadoC)<<endl;
    cout<< "El area de un retangulo: "<<  rectangulo(Ladoa,Ladob)<<endl;
    cout<< "El area de un circulo: "<<  Circulo(radio,3.1416)<<endl;
    return 0;
}

