// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 14/10/2026
// Número de ejercicio: 2
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

int Aleatorios(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

void Burbuja(vector<int>& marcador, int N)
{
    int aux;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if (marcador[j] < marcador[j + 1])
            {
                aux = marcador[j];
                marcador[j] = marcador[j + 1];
                marcador[j + 1] = aux;
            }
        }
    }
}

void Generador_de_marcadores(vector<int>& marcador, int N)
{
    for (int i = 0; i < N; i++)
    {
        marcador[i] = Aleatorios(1, 100);
    }
}

void top_3_mejores(vector<int>& marcador)
{
    for (int i = 0; i < 3; i++)
    {
        cout << marcador[i] << endl;
    }
}
void Imprime_numeros(vector<int> marcador,int N)
{
    for (int i = 0; i < N; i++)
    {
        cout<<marcador[i]<<endl;
    }
}
int main()
{
    srand(time(0));

    int N;

    cout << "Ingrese el numero de jugadores: " << endl;
    cin >> N;
    vector<int> marcador(N);

    Generador_de_marcadores(marcador, N);
    Imprime_numeros(marcador,N);
    Burbuja(marcador, N);
    Imprime_numeros(marcador,N);
    cout << "=los 3 mejores puntuaciones son: =" << endl;
    top_3_mejores(marcador);

    return 0;
}