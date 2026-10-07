// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quidpe Mamani.
// Fecha creación: 06/10/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;
int Aleatorio(int min, int max)
{
    return (rand()%(max-min+1))+min;
}
int main ()
{
    int N;
    string nombres[10]={"Juan","Mario","Lucas","Homero","Pedro","Maria","Carla","Camila","Luciana","Paola"};
    string apellidos[10]={"Quispe","Mamani","Condori","Huanca","Carrasco","Vazquez","Carvajal","Cruz","Torres","Gomez"};
    int edad[10]={12,14,54,23,54,12,23,32,76,54};
    srand(time(0));
    cout << "Ingrese la cantidad de personas"<<endl;
    cin >> N;
    for (int i =1;i<=N;i++)
    {
        cout<<"El nombre es:"<<nombres[Aleatorio(0,9)]<<endl;
        cout<<"El Apellido es:"<<apellidos[Aleatorio(0,9)]<<endl;
        cout<<"La edad es"<< edad[Aleatorio(0,9)]<<endl;
        cout<<"---------------------"<<endl;
    }
    return 0;
}
