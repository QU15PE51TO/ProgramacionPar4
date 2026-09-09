// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 08/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int bebes;
int uno=0;
int dos=0;
int tres=0;
int resultado;
int Edad(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}
int Bebe(int n)
{
    switch (n)
    {
        case 1:
        uno++;
            return 1;
            
        case 2:
        dos++;
            return 2;
        case 3:
        tres++;
            return 3;
        default:
            return 0;
    }
}
int CPaniales(int a,int b,int c)
{
    resultado=a*6+b*3+c*2;
    return resultado;
}
int main()
{
    srand(time(0));
    cout << "Introduzca un numero de bebes: ";
    cin >> bebes;
    for (int n = 1; n <= bebes; n++)
    {
        cout << "Bebe " << n << ": " << Bebe(Edad(1, 3)) <<" anios"<< endl;
    }
    cout << "Los bebes usaron: "<<CPaniales(uno,dos,tres)<<" Paniales"<<endl;
    return 0;
}