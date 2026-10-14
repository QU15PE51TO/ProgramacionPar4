// Materia: Programación I, Paralelo 4 
// Autor: Kevin Javier Quispe Mamani. 
// Fecha creación: 13/10/2026 
// Número de ejercicio: 4
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
void Imprecion_de_matrices(int matriz[100][100],int fila, int columna);
void mayor_y_menor(int matriz[100][100],int fila, int columna);
int Aleatorio (int min, int max)
{
    return rand()%(max-min+1)+min;
}
void Generador_de_matrices(int matriz[100][100],int fila, int columna)
{
    for (int i=0;i<fila;i++)
    {
        for (int j=0;j<columna;j++)
        {
            matriz[i][j]=Aleatorio(0,9);
        }
    }
}
int main()
{
    srand(time(0));
    int matriz[100][100];
    int fila;
    int columna;
    cout<< "Ingrese el numero de filas"<<endl;
    cin >> fila;
    cout<< "Ingrese el numero de columnas"<<endl;
    cin >> columna;
    Generador_de_matrices(matriz,fila,columna);
    Imprecion_de_matrices(matriz,fila,columna);
    mayor_y_menor(matriz,fila,columna);
}
void mayor_y_menor(int matriz[100][100],int fila, int columna)
{    
    bool encontrado = false;
    for (int i = 0; i < fila; i++)
    {   
        for (int j = 0; j < columna; j++)
        {
            bool menor = true;
            bool mayor = true;

            for (int k = 0; k < columna; k++)
            {
                if (matriz[i][k] < matriz[i][j])
                    menor = false;
            }

            for (int k = 0; k < fila; k++)
            {
                if (matriz[k][j] > matriz[i][j])
                    mayor = false;
            }

            if (menor && mayor)
            {
                cout << "Punto de silla: " << matriz[i][j] << endl;
                cout << "Fila: " << i + 1 << ", Columna: " << j + 1 << endl;
                encontrado = true;
            }
        }
    }
    if (!encontrado)
        cout << "No se encontro punto de silla." << endl;
}       
void Imprecion_de_matrices(int matriz[100][100],int fila, int columna)
{
    for (int i=0;i<fila;i++)
    {
        for (int j=0;j<columna;j++)
        {
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
}