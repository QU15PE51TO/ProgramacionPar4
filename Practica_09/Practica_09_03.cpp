// Materia: Programación I, Paralelo 4 
// Autor: Kevin Javier Quispe Mamani. 
// Fecha creación: 13/10/2026 
// Número de ejercicio: 3
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
void generadordematrices(int dimencion,int matriz[100][100]);
void imprenciondematrices(int dimencion,int matriz[100][100]);
int main()
{
    int dimencion;
    int matriz[100][100];
    cout<<"introsca las dimenciones de la matriz: "<<endl;
    cin>>dimencion;
    generadordematrices(dimencion,matriz);
    imprenciondematrices(dimencion,matriz);
}
int Aleatorio(int min, int max)
{
    return (rand()%(max-min+1))+min;
}
void generadordematrices(int dimencion,int matriz[100][100])
{
    for (int i=0;i<dimencion;i++)
        {
            for (int j=0;j<dimencion;j++)
            {   
                matriz[i][j]=j+i+j+1;
            }
        }
}
void imprenciondematrices(int dimencion,int matriz[100][100])
{
    for (int i=0;i<dimencion;i++)
        {
            for (int j=0;j<dimencion;j++)
            {   
                cout<<matriz[i][j];
            }
            cout<<endl;
        }
}
