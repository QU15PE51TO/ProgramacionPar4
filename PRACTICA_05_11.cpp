// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 08/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int Numero;
int Pares=0;
int Impares=0;
int NPrimo=0;
int Aleatorios(int min,int max)
{
    return (rand()%(max-min+1))+min;
}
bool Primo(int n)
{
    if (n<2)
    {
    return false;
    }
    for (int i = 2; i < n; i++)
    {
        if(n %i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int N;
    srand(time(0));
    cout << "Introduce la cantidad de N que quieres"<<endl;
    cin >> N;
    for (int i=1;i<=N;i++)
    {
        Numero=Aleatorios(1,1000);
        cout << Numero<<endl;
        if (Numero %2==0)
        {
            Pares=Pares+Numero;     
        }
        else 
        {
            Impares=Impares+Numero;
        }
        if (Primo(Numero))
        {
            if(Numero>NPrimo)
            {
                NPrimo=Numero;
            }
        }
    }
    cout<<"La suma de los pares es: "<<Pares<<endl;
    cout<<"La suma de los impares es: "<<Impares<<endl;
    cout<<"El mayor numero primo es: "<<NPrimo<<endl;
    return 0;
}