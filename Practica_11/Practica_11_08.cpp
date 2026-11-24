// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani.
// Fecha creación: 30/10/2026
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;
struct Estudiante
{
    string Nombre;
    int NotaFinal;
};
int Aleatorio(int min,int max)
{
    return (rand()%(max-min+1))+min;
}
void Servidor_de_estudiantes(vector<Estudiante>&Alumno,int N)
{
    cin.ignore();
    for (int i=0;i<N;i++)
    {       
        cout<<"Ingrese el nombre del estudiante: ";
        getline(cin,Alumno[i].Nombre);
        cout<<"Ingrese la Nota del estudiante";
        Alumno[i].NotaFinal=Aleatorio(1,100);
        cout<<Alumno[i].NotaFinal<<endl;
    }
}
void Reprobados(vector<Estudiante>&Alumno,int N)
{ 
    cout<<"\nLista de Reprobados"<<endl;
    for (int i=0;i<N;i++)
    {
        if(Alumno[i].NotaFinal<60)
        {
            cout<<Alumno[i].Nombre<<"\t"<<Alumno[i].NotaFinal<<endl;
        }
    }
}
void Aprobados(vector<Estudiante>&Alumno,int N)
{ 
    cout<<"\nLista de Aprobados"<<endl;
    for (int i=0;i<N;i++)
    {
        if(Alumno[i].NotaFinal>=60)
        {
            cout<<Alumno[i].Nombre<<"\t"<<Alumno[i].NotaFinal<<endl;
        }
    }
}
int main()
{
    int N;
    cout<<"Ingrese la lista de estudiantes: "<<endl;
    cin>>N;
    vector<Estudiante>Alumno (N);
    srand(time(0));
    Servidor_de_estudiantes(Alumno,N);
    Aprobados(Alumno,N);
    Reprobados(Alumno,N);
}