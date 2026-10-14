// Materia: Programación I, Paralelo 4 
// Autor: Kevin Javier Quispe Mamani. 
// Fecha creación: 13/10/2026 
// Número de ejercicio: 1 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
void cambiavectores(int matriz[100][100], int fila, int columna);
void generadordematrices(int fila, int columna,int matriz[100][100]);
void imprimematrices(int fila,int columna, int matriz[100][100]);
int Aleatorio(int min, int max)
{
    return (rand()%(max-min+1))+min;
}
int main ()
{
    int fila;
    int columna;
    int matriz[100][100];
    srand(time(0));
    cout << "introduce el numero de filas: ";
    cin>>fila;
    cout << "Introduce el numero de columnas: ";
    cin>>columna;
    generadordematrices(fila,columna,matriz);
    imprimematrices(fila,columna,matriz);
    cout<<"-----------------"<<endl;
    cambiavectores(matriz,fila,columna);
    imprimematrices(fila,columna,matriz);
    
}
void cambiavectores(int matriz[100][100], int fila, int columna)
{
    int auxiliar;
    for (int i=0;i<fila;i++)
    {
        for (int j=0;j<columna;j++)
        {
            auxiliar = matriz[0][j];
            matriz[0][j] = matriz[fila-1][j];
            matriz[fila-1][j] = auxiliar;
        }
    }  
}
void generadordematrices(int fila, int columna,int matriz[100][100])
{
    for (int i=0;i<fila;i++)
        {
            for (int j=0;j<columna;j++)
            {   
                matriz[i][j]=Aleatorio(0,9);
            }
        }
}
void imprimematrices(int fila,int columna, int matriz[100][100])
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