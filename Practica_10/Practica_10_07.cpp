// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 14/10/2026
// Número de ejercicio: 7
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;
void imprimir(vector<string>nombre,int notas[100][100],float promedio[100]);
void Generar_3_notas(int notas[100][100]);
void Generar_promedios(int notas[100][100],float promedio[100]);
void ordenar(vector<string>&nombre,int notas[100][100],float promedio[100]);
int main ()
{
    srand(time(0));
    int notas[100][100];
    float promedio[100];
    vector <string> nombres ={"Juan","Mario","Lucas","Homero","Pedro"};
    Generar_3_notas(notas);
    Generar_promedios(notas,promedio);
    imprimir(nombres,notas,promedio);
    ordenar(nombres,notas,promedio);
    cout<<"=============================="<<endl;
    imprimir(nombres,notas,promedio);
}
int Aleatorios(int min, int max)
{
    return (rand()%(max-min+1))+min;
}
void Generar_3_notas(int notas[100][100])
{
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            notas[i][j]=Aleatorios(1,100);
        }
        cout<<endl;
    }
}
void Generar_promedios(int notas[100][100],float promedio[100])
{
    int suma=0;
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            suma=suma+notas[i][j];
        }
        promedio[i]=suma/3;
        suma=0;
    }
}
void imprimir(vector<string>nombre,int notas[100][100],float promedio[100])
{
    for (int i=0;i<5;i++)
    {
        cout<<nombre[i]<<"\t";
        for(int j=0;j<3;j++)
        {
            cout<<notas[i][j]<<"\t";
        }
        cout<<promedio[i]<<endl;
    }
}
void ordenar(vector<string>&nombre,int notas[100][100],float promedio[100])
{
    string auxNombre;
    int auxNotas;
    float auxPromedio;
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(nombre[j]>nombre[j+1])
            {
                auxNombre=nombre[j];
                nombre[j]=nombre[j+1];
                nombre[j+1]=auxNombre;
                for(int k=0;k<3;k++)
                {
                    auxNotas=notas[j][k];
                    notas[j][k]=notas[j+1][k];
                    notas[j+1][k]=auxNotas;  
                }
                auxPromedio=promedio[j];
                promedio[j]=promedio[j+1];
                promedio[j+1]=auxPromedio;
            }
        }
    }
}