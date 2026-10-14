// Materia: Programación I, Paralelo 4 
// Autor: Kevin Javier Quispe Mamani. 
// Fecha creación: 13/10/2026 
// Número de ejercicio: 6
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int Aleatorio (int min, int max)
{
    return (rand()%(max-min+1))+min;   
}
void Generador_de_matrices(int matriz[100][100],int fila, int columna)
{
    int dia=1;
    for (int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            matriz[i][j]=Aleatorio(5,35);
            cout<<dia<<"-"<<matriz[i][j]<<"\t";
            dia++;
        }
        cout<<endl;
    }
}
void Encontra_max_temp(int matrix[100][100],int fila,int columna)
{
    int mayor=matrix[0][0];
    int dia_caluroso=1;
    int dia=1;
    for (int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            if(matrix[i][j]>mayor)
            {
            mayor=matrix[i][j];
            dia_caluroso=dia;
            }
            dia++;
        }
    }
    cout << "La temperatura maxima es: " << mayor << endl;
    cout << "El dia mas caluroso es: " << dia_caluroso << endl;
}
void Promedio(int matriz[100][100],int fila,int columna)
{
    int suma=0;
    for (int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            suma=suma+matriz[i][j];
        }
        cout<<"promedio de la semana: "<<i+1<<"\t"<<suma/columna<<endl;
        suma=0;
    }
}
void Contador_de_dias(int matriz[100][100],int fila, int columna)
{
    int contador=0;
    for (int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            if(matriz[i][j]>30)
            {
                contador++;
            }
        } 
    } 
    cout<<"Los dias que superaron lso 30 fueron: "<<contador<<endl;
}
int main()
{
    srand(time(0));
    int fila=4;
    int columna=7;
    int matriz[100][100];
    Generador_de_matrices(matriz,fila,columna);
    Encontra_max_temp(matriz,fila,columna);
    Promedio(matriz,fila,columna);
    Contador_de_dias(matriz,fila,columna);
    return 0;
}