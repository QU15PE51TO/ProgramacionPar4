// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 22/08/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int max=100;
    int min=0;
    int N;
    int suma=0;
    int par=0;
    int impar=0;
    int numero;
    int primo=0;
    srand(time(0));
    cout << "Introduce un numero: ";
    cin >> N;
    for (int i =1;i<=N;i++)
    {
        numero=(rand()%(max-min+1))+min;
        suma=suma+numero;
        if(numero %2==0)
        {
            par=par+numero;
        }
        else
        {
            impar=impar+numero;
        }
        bool np =true;
        if (numero < 2)
        {
            np = false;
        }
        for (int j = 2; j < numero; j++)
        {
            if (numero % j == 0)
            {
                np = false;
                break;
            }
        }
        if (np == true)
        {
            primo = primo + numero;
        }
    }    
    cout<<"La suma total de los todos los numeros es: "<<suma<<endl;
    cout<<"La suma total de todos los numeros pares es: "<<par<<endl;
    cout<<"La suma total de todos los numeros impares es: "<<impar<<endl;
    cout<<"La suma total de todos los numeros primos es: "<<primo<<endl;
    return 0;
}