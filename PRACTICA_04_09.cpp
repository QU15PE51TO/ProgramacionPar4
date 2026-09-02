// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quispe Mamani
// Carrera del estudiante: Ingenieria Mecatronica.
// Fecha creación: 01/09/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int Estudiantes;
int nota1;
int nota2;
int nota3;
int pfinal;
int Parcialone;
bool Parcial1 (int min,int max)
{
    Parcialone=(rand()%(max-min+1))+min;
    if (Parcialone>=60)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int Parcialtwo;
bool Parcial2 (int min,int max)
{
    Parcialtwo=(rand()%(max-min+1))+min;
    if (Parcialtwo>=60)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int Parcialthree;
bool Parcial3 (int min,int max)
{
    Parcialthree=(rand()%(max-min+1))+min;
    if (Parcialthree>=60)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int Parcialfinal;
bool Parcial4 (int min,int max)
{
    Parcialfinal=(rand()%(max-min+1))+min;
    if (Parcialfinal>=60)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main ()
{
    int Promedio;
    int Semestre;
    int Sfinal;
    int Ffinal;
    int Nfinal;
    int Aprobados=0;
    int Reprobados=0;
    srand(time(0));
    cout << "Introduce le numero de estudiantes: "<<endl;
    cin>>Estudiantes;
    for (int i =1; i<=Estudiantes;i++)
    {
        cout<<"el estudinte"<<i<<endl;
        nota1=Parcial1(1,100);
        cout << "1er Parcial tiene "<<Parcialone<<" ";
        if (nota1)
        {
            cout<< "Aprobo"<<endl;
        }
        else
        {
            cout << "reprobo"<<endl;
        }
        nota2=Parcial2(1,100);
        cout << "2do Parcial tiene "<<Parcialtwo<<" ";
        if (nota2)
        {
            cout<< "Aprobo"<<endl;
        }
        else
        {
            cout << "reprobo"<<endl;
        }
        nota3=Parcial3(1,100);
        cout << "3er Parcial tiene "<<Parcialthree<<" ";
        if (nota3)
        {
            cout<< "Aprobo"<<endl;
        }
        else
        {
            cout << "reprobo"<<endl;
        }
        Promedio=Parcialone+Parcialtwo+Parcialthree;
        Semestre=Promedio/3;
        cout << "la nota final es: " <<Semestre<<" ";
        if (Semestre>=60)
        {
            cout<<"aprobo"<<endl;
        }
        else 
        {
            cout<<"reprobo"<<endl;
        }
        pfinal=Parcial4(1,100);
        cout << "final Parcial tiene "<<Parcialfinal<<" ";
        if (pfinal)
        {
            cout<< "Aprobo"<<endl;
        }
        else
        {
            cout << "reprobo"<<endl;
        }
        cout <<"***********************"<<endl;
        Sfinal=Semestre*0.5;
        Ffinal=Parcialfinal*0.5;
        Nfinal=Sfinal+Ffinal;
        if(Nfinal>=51)
        {
            Aprobados++;
        }
        else
        {
            Reprobados++;
        }
    }
    cout<<"Han aprobado: "<<Aprobados<<endl;
    cout<<"Han reprobado: "<<Reprobados<<endl;
    return 0;
}