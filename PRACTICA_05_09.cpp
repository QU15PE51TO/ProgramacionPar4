// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 08/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int Aleatorio(int min, int max)
{
    return (rand()%(max-min+1))+min;
}
int factorial(int N)
{
    int fact=1;
    for(int i=1;i<=N;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main ()
{
    int Numero;
    int L;
    srand(time(0));
    cin >>L;
    for(int N=1;N<=L;N++)
    {
    Numero=Aleatorio(1,10);
    cout<<"El numero es: "<<Numero<<endl;
    cout<<"La factorial es: "<<factorial(Numero)<<endl;
    }
    return 0;
}