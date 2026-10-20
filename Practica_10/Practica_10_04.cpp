// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 14/10/2026
// Número de ejercicio: 4
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int Aleatorios(int min, int max);
void Generador_de_precios(vector<double>& precios, int N);
void Seleccion(vector<double>& precios, int N);
void Imprime_precios(vector<double>& precios, int N);
void Producto_barato(vector<double>& precios);
void Producto_caro(vector<double>& precios);
void Mediana(vector<double>& precios, int N);
int Aleatorios(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}
int main()
{
    srand(time(0));
    int N;
    cout << "Ingrese el numero de productos: " << endl;
    cin >> N;
    vector<double> precios;
    Generador_de_precios(precios, N);
    cout << "\nPrecios desordenados:" << endl;
    Imprime_precios(precios, N);
    Seleccion(precios, N);
    cout << "\nPrecios ordenados:" << endl;
    Imprime_precios(precios, N);
    Producto_barato(precios);
    Producto_caro(precios);
    Mediana(precios, N);
    return 0;
}
void Generador_de_precios(vector<double>& precios, int N)
{
    precios.resize(N);
    for (int i = 0; i < N; i++)
    {
        precios[i] = Aleatorios(100, 10000) / 100.0;
    }
}
void Seleccion(vector<double>& precios, int N)
{
    int menor;
    double aux;

    for (int i = 0; i < N - 1; i++)
    {
        menor = i;

        for (int j = i + 1; j < N; j++)
        {
            if (precios[j] < precios[menor])
            {
                menor = j;
            }
        }

        aux = precios[i];
        precios[i] = precios[menor];
        precios[menor] = aux;
    }
}
void Imprime_precios(vector<double>& precios, int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << precios[i] << endl;
    }
}
void Producto_barato(vector<double>& precios)
{
    cout << "\nEl producto mas barato cuesta: "
         << precios[0] << endl;
}

void Producto_caro(vector<double>& precios)
{
    cout << "El producto mas caro cuesta: "
         << precios[precios.size() - 1] << endl;
}
void Mediana(vector<double>& precios, int N)
{
    double mediana;

    if (N % 2 != 0)
    {
        mediana = precios[N / 2];
    }
    else
    {
        mediana = (precios[N / 2 - 1] + precios[N / 2]) / 2.0;
    }
    cout << "La mediana de los precios es: "
         << mediana << endl;
}