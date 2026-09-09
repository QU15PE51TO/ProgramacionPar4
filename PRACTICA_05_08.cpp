// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 08/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int caras=0;
int cruz=0;
int Aleatorio (int min, int max)
{
    return (rand()%(max-min+1))+min;
}
bool Intentos(int N)
{
    if (N %2==0)
    {
        caras++;
        return true;
    }
    else 
    {
        cruz++;
        return true;
    }
}
int main()
{
    int moneda;
    int intentos;
    srand(time(0));
    cout<< "Introduce el numero de vueltas a tu moneda: "<<endl;
    cin >> intentos;
    for(int i=1;i<=intentos;i++)
    {
        moneda=Aleatorio(1,2);
        cout << i << "." << moneda <<endl;
        Intentos(moneda);
    }
cout <<"total de caras: " <<caras << endl;
cout <<"toral de cruz: " <<cruz << endl;
return 0;
}