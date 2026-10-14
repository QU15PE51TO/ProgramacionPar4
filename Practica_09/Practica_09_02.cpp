// Materia: Programación I, Paralelo 4 
// Autor: Kevin Javier Quispe Mamani. 
// Fecha creación: 13/10/2026 
// Número de ejercicio: 2
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
void generadordematrices(int matrix[100][100],int fila,int columna);
void imprimirmatrices(int matrix[100][100],int fila,int columna);
void sumadematrices(int matrix[100][100],int fila,int columna,int &suma);
void productodematrices(int matrix[100][100],int fila,int columna,int &producto);
void mayotmatrices(int matrix[100][100],int fila,int columna, int &mayor);
void promediodematrices(int matrix[100][100],int fila, int columna, int &promedio);
int Aleatorios(int min,int max)
{
    return (rand()%(max-min+1));
}
int main()
{
    srand(time(0));
    int fila;
    int columna;
    int matrix[100][100];
    fila=Aleatorios(1,10);
    columna=Aleatorios(1,10);
    int suma=0;
    int producto=1;
    int mayor;
    int promedio;
    generadordematrices(matrix,fila,columna);
    imprimirmatrices(matrix,fila,columna);
    sumadematrices(matrix,fila,columna,suma);
    productodematrices(matrix,fila,columna,producto);
    mayotmatrices(matrix,fila,columna,mayor);
    promediodematrices(matrix,fila,columna,promedio);
    cout<<"la suma de la ultima columa es: "<<suma<<endl;
    cout<<"el pructo de la ultima fila es: "<<producto<<endl;
    cout<<"el elemento mayor es: "<<mayor<<endl;
    cout<<"El promedio de todas las matrices "<<promedio<<endl;
}
void generadordematrices(int matrix[100][100],int fila,int columna)
{
    for (int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            matrix[i][j]=Aleatorios(0,99);
        }
    }
}
void imprimirmatrices(int matrix[100][100],int fila,int columna)
{
    for (int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout <<endl;
    }
}
void sumadematrices(int matrix[100][100],int fila,int columna,int &suma)
{
    suma=0;
    for (int i=0;i<fila;i++)
    {
        suma = suma+matrix[i][columna-1];
    }
}
void productodematrices(int matrix[100][100],int fila,int columna,int &producto)
{
    producto=1;
    for (int i=0;i<columna;i++)
    {
        producto = producto*matrix[fila-1][i];
    }
}
void mayotmatrices(int matrix[100][100],int fila,int columna, int &mayor)
{
    int a;
    int b;
    for(int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            if(matrix[i][j]>mayor)
            {
                mayor=matrix[i][j];
                a=i;
                b=j;
            }
        }
    }
    cout<<"esta en la posicion: "<<a<<"\ty\t"<<b<<endl;
}
void promediodematrices(int matrix[100][100],int fila, int columna, int &promedio)
{
    int suma=0;
    int denominador;
    denominador=fila*columna;
    for (int i=0;i<fila;i++)
    {
        for(int j=0;j<columna;j++)
        {
            suma=suma+matrix[i][j];
        }
    }
    promedio=suma/denominador;
}