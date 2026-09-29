// Materia: Programación I, Paralelo 4
// Autor: Kevin Javier Quidpe Mamani.
// Fecha creación: 24/09/2026
// Número de ejercicio: 1
#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
using namespace std;
//A
void generdaorVoltaje(vector<double>&voltajes)
{
    for (int i=0;i<100;i++)
    {
        voltajes[i]=20.00+(rand()%20001)/100.00;
    }
}
//B
void generadortemperaturas(vector<double>&temperatura)
{
    for (int i=0;i<50;i++)
    {
        temperatura[i]=rand()%10001/100.00;
    }
}
//C
void generadorAlfabetos(vector<char>&alfabeto)
{
    string alfanumericos = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    for(int i = 0; i < 30; i++)
    {
        alfabeto[i] = alfanumericos[rand() % alfanumericos.size()];
    }
}
//D
void generadorAnios(vector<int>&Anios)
{
    for (int i = 0;i<100;i++)
    {
        Anios[i]=1990+(rand()%36);
    }
}
//E
void generadorVelocidades(vector<double>&velocidad)
{
    for (int i=0;i<32;i++)
    {
        velocidad[i]=10+(rand()%29001)/100.00;
    }
}
void generadorDistancia(vector<double>&Distancia)
{
    for (int i=0;i<1000;i++)
    {
        Distancia[i]=1+(rand()%99901)/100.00;
    }
}
int main ()
{
    srand(time(0));
    vector<double> voltajes(100);
    vector<double> temperaturas(50);
    vector<char> alfabeto(30);
    vector<int> anios(100);
    vector<double> velocidades(32);
    vector<double> distancias(1000); 
    generdaorVoltaje(voltajes);
    generadortemperaturas(temperaturas);
    generadorAlfabetos(alfabeto);
    generadorAnios(anios);
    generadorVelocidades(velocidades);
    generadorDistancia(distancias);
    cout << "Voltajes"<<endl;
    for(int i=0;i<100;i++)
    {
        cout << voltajes[i]<<" V  ";
    }
    cout << "\nTemperaturas"<<endl;
    for (int i=0;i<50;i++)
    {
        cout << temperaturas[i]<<"  ";
    } 
    cout << "\nAlfabeto"<<endl;
    for(int i=0;i<30;i++)
    {
        cout<<alfabeto[i]<<"  ";
    }
    cout << "\nAnios"<<endl;
    for(int i=0;i<30;i++)
    {
        cout<<anios[i]<<"  ";
    }
    cout << "\nVelocidades"<<endl;
    for(int i=0;i<30;i++)
    {
        cout<<velocidades[i]<<"  ";
    }
    cout << "\nDistancia"<<endl;
    for(int i=0;i<30;i++)
    {
        cout<<distancias[i]<<"  ";
    }
    return 0;
}
