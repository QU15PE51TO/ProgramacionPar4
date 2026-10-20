// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 14/10/2026
// Número de ejercicio: 6
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;
void burbuja(vector <string> &nombres, int N);
void Generador_de_nombres(vector <string>& nombres,int N);
void Imprime_el_nombre(vector<string> &nombre,int N);
int Aleatorios(int min,int max)
{
    return (rand()%(max-min+1))+min;
}
int main()
{
    srand(time(0));
    vector <string> nombres ;//={"Juan","Mario","Lucas","Homero","Pedro","Maria","Carla","Camila","Luciana","Paola"};
    int N;
    cout<<"Genere el numero de estudiantes"<<endl;
    cin>>N;
    Generador_de_nombres(nombres,N);
    cout<<"\ndesordenado"<<endl;
    Imprime_el_nombre(nombres,N);
    burbuja(nombres,N);
    cout<<"\nordenado"<<endl;
    Imprime_el_nombre(nombres,N);
    return 0;    
}
void burbuja(vector <string> &nombres,int N)
{
    string aux;
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-1-i;j++)
        {
            if (nombres [j]>nombres[j+1])
            {
            aux = nombres[j];
            nombres[j]=nombres[j+1];
            nombres[j+1]=aux;
            }
        }
    }
}
void Generador_de_nombres(vector <string> &nombres,int N)
{
    vector<string>disponible ={"Juan","Mario","Lucas","Homero","Pedro","Maria","Carla","Camila","Luciana","Paola"};
    nombres.resize(N);
    for(int i=0;i<N;i++)
    {
        int guardar_nombre;
        guardar_nombre=Aleatorios(0,9);
        nombres[i]=disponible[guardar_nombre];
    }
}
void Imprime_el_nombre(vector<string> &nombre,int N)
    {
    for(int i=0;i<N;i++)
    {
        cout<<nombre[i]<<endl;
    }
}