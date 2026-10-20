// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 14/10/2026
// Número de ejercicio: 3
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;
void Generador_de_Tiempo(vector <float> &tiempo,int N)
{
    for (int i=0;i<N;i++)
    {
        tiempo[i] = (1000+rand()%1001)/100.0;
    }
}
void imprime_tiempo(vector <float> tiempo,int N)
{
    for (int i=0;i<N;i++)
    {
        cout<<tiempo[i]<<" segundos"<<endl;
    }
}
void burbuja(vector <float> &tiempo,int N)
{
    float aux;
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1-i;j++)
        {
            if (tiempo [j]>tiempo[j+1])
            {
            aux = tiempo[j];
            tiempo[j]=tiempo[j+1];
            tiempo[j+1]=aux;
            }
        }
    }
}
int main()
{
    srand(time(0));
    int N;
    cout<<"Cuantos atletas estan corriendo: "<<endl;
    cin>>N;
    vector <float> tiempo(N);
    Generador_de_Tiempo(tiempo,N);
    cout<<"\nAntes"<<endl;
    imprime_tiempo(tiempo,N);
    burbuja(tiempo,N);
    cout<<"\nDespues"<<endl;
    imprime_tiempo(tiempo,N);
}