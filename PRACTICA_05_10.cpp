// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 08/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int N;
int primos=0;
int Aleatorio(int min, int max)
{
    return (rand()%(max-min+1))+min;
}
bool Primos(int N)
{
    if(N<2)
    {
        return false;
    }
    for(int i=2;i<N;i++)
    {
        if(N %i==0)
        {
            return false;
        }
    }
    primos++;
    return true;
}
int main()
{
    int num;
    srand(time(0));
    cout << "Escriba un numero N: "<<endl;
    cin >> N;
    for(int i =1;i<=N;i++)
    {
        num=Aleatorio(1,10000);
        cout<<num<<endl;
        Primos(num);
    }
    cout<<"La cantidad de numeros primos: "<<primos<<endl;
}